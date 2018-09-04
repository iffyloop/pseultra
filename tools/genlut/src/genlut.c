/*
 * pseultra/tools/genlut/src/genlut.c
 * Generate look-up tables
 *
 * (C) pseudophpt 2018
 */

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>

#include "genlut.h"

lut_func luts [1] = {
    { sinf_wrap, "sin", 0x800},
};

int main (int argc, char *argv[]) {
    if (argc != 1) {
        printf("Usage: genlut\n");
        return 0;
    }

    // Open LUT file for writing
    FILE *lut_file = fopen("lut.h", "w");

    // Print header
    fprintf(lut_file, "/* This header file contains a lookup table generated by the pseultra genlut tool. It should not be edited directly */\n\n");
    
    // Generate each LUT
    for (int i = 0; i < (sizeof luts / sizeof luts[0]); i ++) {
        gen_lut(luts[i], lut_file);
    }

    // Close file
    fclose(lut_file);
}

void gen_lut (lut_func lut, FILE *lut_file) {
    // Generate space for symbol name
    char *symname = malloc(strlen(lut.lut_name) + strlen("_lut") + 1);

    // Copy over
    strcpy(symname, lut.lut_name);

    // Copy ending
    strcpy(symname + strlen(lut.lut_name), "_lut");

    // Print declaration
    fprintf(lut_file, "u32 %s [%d] = {", symname, lut.entries);
    
    // Free symname space
    free(symname);

    // Calculate
    for (int i = 0; i < lut.entries; i ++) {
        // Perform calculation
        float result = lut.flop(i);

        // Store fixed result
        uint32_t fixed_result = (int)(result * 0x10000);

        // If end of line (every 16)
        if ((i % 16) == 0) {
            fprintf(lut_file, "\n    ");
        }

        // Print in file
        fprintf(lut_file, "0x%x, ", fixed_result);
    }

    fprintf(lut_file, "\n};\n\n");
}

float sinf_wrap (int x) {
    float y = (float)x * (M_PI * 2 / 0x2000);

    return sinf(y);
}