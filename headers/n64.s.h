#
# pseultra/headers/n64.s.h
# N64 definitions for assembler
# 
# (C) pseudophpt 2018
#

#
# Coprocessor 0 (COP0) Registers
#

.set Index,	$0
.set Random, $1
.set EntryLo0, $2
.set EntryLo1, $3
.set Context, $4
.set PageMask, $5
.set Wired,	$6
# 7 reserved
.set BadVAddr, $8
.set Count, $9
.set EntryHi, $10
.set Compare, $11
.set Status, $12
.set Cause, $13
.set EPC, $14
.set PRId, $15
.set Config, $16
.set LLAddr, $17
.set WatchLo, $18
.set WatchHi, $19
.set XContext, $20
# 21 - 26 reserved
.set CacheErr, $27
.set TagLo, $28
.set TagHi, $29
.set ErrorEPC, $30
# 31 Reserved

#
# Instructions
#

.macro eret
.word 0x42000018
.endm

#
# Memory segments
#

.set KUSEG, 0x00000000
.set KSEG0, 0x80000000
.set KSEG1, 0xA0000000
.set KSSEG, 0xC0000000
.set KSEG3, 0xE0000000

#
# RDRAM Registers
#

.set RDRAM_BASE_REG, 0x03F00000

.set RDRAM_CONFIG_REG, 0x03F00000 
.set RDRAM_DEVICE_TYPE_REG, 0x03F00000 
.set RDRAM_DEVICE_ID_REG, 0x03F00004
.set RDRAM_DELAY_REG, 0x03F00008 
.set RDRAM_MODE_REG, 0x03F0000C 
.set RDRAM_REF_INTERVAL_REG, 0x03F00010 
.set RDRAM_REF_ROW_REG, 0x03F00014 
.set RDRAM_RAS_INTERVAL_REG, 0x03F00018 
.set RDRAM_MIN_INTERVAL_REG, 0x03F0001C 
.set RDRAM_ADDR_SELECT_REG, 0x03F00020 
.set RDRAM_DEVICE_MANUF_REG, 0x03F00024 

#
# SP Registers
#

.set SP_BASE_REG, 0x04040000

.set SP_DMEM, 0x04000000 
.set SP_IMEM, 0x04001000 
.set SP_MEM_ADDR_REG, 0x04040000 
.set SP_DRAM_ADDR_REG, 0x04040004 
.set SP_RD_LEN_REG, 0x04040008 
.set SP_WR_LEN_REG, 0x0404000C 
.set SP_STATUS_REG, 0x04040010 
.set SP_DMA_FULL_REG, 0x04040014 
.set SP_DMA_BUSY_REG, 0x04040018 
.set SP_SEMAPHORE_REG, 0x0404001C 
.set SP_PC_REG, 0x04080000 
.set SP_IBIST_REG, 0x04080004

#
# DP Command Registers
#

.set DPC_BASE_REG, 0x04100000

.set DPC_START_REG, 0x04100000 
.set DPC_END_REG, 0x04100004 
.set DPC_CURRENT_REG, 0x04100008 
.set DPC_STATUS_REG, 0x0410000C 
.set DPC_CLOCK_REG, 0x04100010 
.set DPC_BUFBUSY_REG, 0x04100014 
.set DPC_PIPEBUSY_REG, 0x04100018
.set DPC_TMEM_REG, 0x0410001C

#
# DP Span Registers
#

.set DPS_BASE_REG, 0x04200000

.set DPS_TBIST_REG, 0x04200000 
.set DPS_TEST_MODE_REG, 0x04200004 
.set DPS_BUFTEST_ADDR_REG, 0x04200008 
.set DPS_BUFTEST_DATA_REG, 0x0420000C 

#
# MIPS Interface Registers
#

.set MI_BASE_REG, 0x04300000

.set MI_INIT_MODE_REG, 0x04300000 
.set MI_VERSION_REG, 0x04300004 
.set MI_INTR_REG, 0x04300008 
.set MI_INTR_MASK_REG, 0x0430000C

#
# VI Registers
#

.set VI_BASE_REG, 0x04400000

.set VI_STATUS_REG, 0x04400000 
.set VI_ORIGIN_REG, 0x04400004 
.set VI_WIDTH_REG, 0x04400008 
.set VI_INTR_REG, 0x0440000C 
.set VI_CURRENT_REG, 0x04400010 
.set VI_BURST_REG, 0x04400014 
.set VI_V_SYNC_REG, 0x04400018 
.set VI_H_SYNC_REG, 0x0440001C 
.set VI_LEAP_REG, 0x04400020 
.set VI_H_START_REG, 0x04400024 
.set VI_V_START_REG, 0x04400028 
.set VI_V_BURST_REG, 0x0440002C 
.set VI_X_SCALE_REG, 0x04400030 
.set VI_Y_SCALE_REG, 0x04400034

#
# AI Registers
#

.set AI_BASE_REG, 0x04500000

.set AI_DRAM_ADDR_REG, 0x04500000 
.set AI_LEN_REG, 0x04500004 
.set AI_CONTROL_REG, 0x04500008 
.set AI_STATUS_REG, 0x0450000C 
.set AI_DACRATE_REG, 0x04500010 
.set AI_BITRATE_REG, 0x04500014

#
# PI Registers
#

.set PI_BASE_REG, 0x04600000

.set PI_DRAM_ADDR_REG, 0x04600000 
.set PI_CART_ADDR_REG, 0x04600004 
.set PI_RD_LEN_REG, 0x04600008 
.set PI_WR_LEN_REG, 0x0460000C 
.set PI_STATUS_REG, 0x04600010 
.set PI_BSD_DOM1_LAT_REG, 0x04600014 
.set PI_BSD_DOM1_PWD_REG, 0x04600018 
.set PI_BSD_DOM1_PGS_REG, 0x0460001C 
.set PI_BSD_DOM1_RLS_REG, 0x04600020 
.set PI_BSD_DOM2_LAT_REG, 0x04600024 
.set PI_BSD_DOM2_PWD_REG, 0x04600028 
.set PI_BSD_DOM2_PGS_REG, 0x0460002C 
.set PI_BSD_DOM2_RLS_REG, 0x04600030

#
# RI Registers
#

.set RI_BASE_REG, 0x04700000

.set RI_MODE_REG, 0x04700000 
.set RI_CONFIG_REG, 0x04700004 
.set RI_CURRENT_LOAD_REG, 0x04700008 
.set RI_SELECT_REG, 0x0470000C 
.set RI_REFRESH_REG, 0x04700010 
.set RI_LATENCY_REG, 0x04700014 
.set RI_RERROR_REG, 0x04700018 
.set RI_WERROR_REG, 0x0470001C

#
# SI Registers
#

.set SI_BASE_REG, 0x04800000

.set SI_DRAM_ADDR_REG, 0x04800000 
.set SI_PIF_ADDR_RD64B_REG, 0x04800004 
.set SI_PIF_ADDR_WR64B_REG, 0x04800010 
.set SI_STATUS_REG, 0x04800018

#
# PIF ROM
#

.set PIF_ROM_START, 0x1FC00000
.set PIF_ROM_END, 0x1FC007BF

#
# PIF RAM
#

.set PIF_RAM_START, 0x1FC007C0
.set PIF_RAM_END, 0x1FC007FC

#
# Cartridge domains
#

.set CART_DOM2_ADDR1, 0x05000000
.set CART_DOM1_ADDR1, 0x06000000
.set CART_DOM1_ADDR2, 0x10000000
