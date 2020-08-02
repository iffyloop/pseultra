# pseultra ![Download total](https://img.shields.io/github/downloads/pseudophpt/pseultra/total.svg) ![Contributors](https://img.shields.io/github/contributors/pseudophpt/pseultra.svg) ![License](https://img.shields.io/github/license/pseudophpt/pseultra.svg) ![Codefactor Grade](https://www.codefactor.io/repository/github/pseudophpt/pseultra/badge?style=plastic)
`pseultra` is a collection of tools used to develop software for the N64 that is simple to use, extensive in nature, and does not infringe the copyright of Nintendo's intellectual property. Currently, pseultra comes with the following tools:

- `boot`: Custom IPL2 bootcode that can be implemented in replacement of Nintendo's original bootcode
- `bootcsum`: Tools for calculating and finding collisions for the checksum used on the IPL3 bootcode
- `makerom`: Tool to create an N64 rom file given object files

In addition to the aforementioned tools, `pseultra` provides a library `libpseultra` which allows for flexible development of N64 games. 

## Getting started

### Prerequisites

To use `pseultra`, you need `scons`, a native C toolchain, as well as a toolchain for compiling for the MIPS VR4300 architecture 

### Building

If you're on MSYS2, first download the pre-built [n64chain](https://cen64.com/uploads/n64chain-win64-tools.zip) binaries, then add them to your PATH: `export PATH=/path/to/n64chain/bin:$PATH`. If you're on macOS/Linux or using a different N64 toolchain, please follow the setup directions in its documentation and ensure it is added to your path.

Now, to install `pseultra`, run `scons` then `scons install` (may require `sudo`) in the tools directory, then run the same commands in the root directory.

To build the documentation, run `doxygen` in the root directory, or optionally, `doxygen Doxyfile.priv` to include documentation on internal functions.

## Testing

Testing is not currently available

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) details on our code of conduct, and the process for submitting pull requests to us.

## Authors

- **pseudophpt**

See also the list of [contributors](https://github.com/pseudophpt/pseultra/graphs/contributors) who participated in this project.

## Versioning

`pseultra` uses SemVer for versioning

## License

This project is licensed under the BSD-3-Clause License - see the LICENSE.md file for details

## Acknowledgements

- **Nabile Rahmani** and **fraser** for their help with regards to various PIF ROM related questions
- **glankk** for helping me with general N64 and `gcc` related questions
- **FoxyToaster** for continuous testing on console
