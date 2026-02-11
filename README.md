### Dev | C++ Playbook

### Common Commands


Below are the most common commands to build and run this C++ project using CMake and MinGW:

**Generate build files (run once or after changing CMakeLists.txt):**
```
cmake -G "MinGW Makefiles" -S . -B build
```

**Build the project (after modifying source code):**
```
cmake --build build
```

**Clean and rebuild the project from scratch:**
```
cmake --build build --clean-first
```

**Install the built files to the default location (optional, if you set up install rules):**
```
cmake --install build
```

**Run tests (if you add tests with CTest):**
```
cd build && ctest
```

**Run the compiled executable (on Windows):**
```
./build/playbook.exe
```

### Notes
- The first command only needs to be run once, unless you change `CMakeLists.txt` or add/remove source files.
- For a clean build, use the `--clean-first` option.
- If you add tests, you can use `ctest` to run them from the build directory.