The error `Undefined symbols for architecture arm64` usually occurs if there are undefined symbols during linking, or if the required libraries (`-l`) were not specified when compiling. 

This might be due to the following reasons:

1. Your C++ code might depend on other libraries that it wasn't compiled with. To fix this issue, ensure you include all the necessary libraries in your build process (using `-L` option) and link them during compilation (`-l<library_name>`). 
   Example: gcc -o outputfile main.cpp -std=c++11 -lstdc++ -lpthread.
2. If you defined a symbol in your C++ code, but it was not declared anywhere. Ensure all the headers where properly included. If the symbol is undefined, it may be because it was defined in some other header file(s) before it was included in your source files.
3. Compiling your C++ code could fail due to an unknown error during linking. Check the compiler's log for more detailed errors. 

As a side note, `~a` is bitwise NOT or complement operator in the C language which gives the bitwise binary inverse of the input number. In C++, this is equivalent to unary negation `-a`. It will give the complement of the value (1's complement) and it works irrespective of the sign of a number. This means if you have signed integer, it gets converted into an unsigned integer before performing operation.
