This error typically arises when there are undefined symbols for the architecture you're compiling for, which is typically ARM64 on Apple devices such as iOS and macOS. Here are some possible solutions:

1. Make sure your `main()` function has been defined in the header file where you included this C++ file. If it hasn't been defined anywhere else in your project, add or declare it in a `.cpp` file. This error arises because linker is looking for symbols which are not available at all.
2. Make sure you're compiling the C++ file with a correct flag, such as `-std=c++17` to ensure compatibility with your project's C++ standard. 
3. The undefined symbols error typically happens when there are some symbols/functions that weren’t declared or defined in this program but exist in some other header files that are getting included by the main cpp file. Make sure you only include the header files which contain functions/symbols that are used by your code, not all unnecessarily header files.
