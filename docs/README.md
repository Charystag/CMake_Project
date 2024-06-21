# Full Cmake Project

## Motivation

This projects intends to show how to use CMake and its test framework 
CTest alongside Doxygen and GitHub Actions to develop a small-yet-complete 
C++ Project. A specific attention will be given to branch protection and good 
practices, as a good project is not only good code but also good documentation

## How to build the project?

You can run the command :
```bash
cmake -B build
```
to generate the build files for the project and then run 
```bash
cmake --build build
```
In order to compile and link all the needed executables

## How to run the tests

To run the tests, you can run the command
```bash
ctest --test-dir build --output-on-error
```
Which will run the tests and create a file called `LastTestsFailed.log` in 
`build/Testing/Temporary`

## How to generate the documentation

If you'd like to generate the documentation, you can run the command 
```bash
cmake --build build --target generate_doc
```
It will use the `mainpage.md` file as its main indexing page and put the 
`index.html` file in the folder `docs/html`. From your terminal, you 
can now run
```bash
open docs/html/index.html
```
to view the documentation in your default browser
