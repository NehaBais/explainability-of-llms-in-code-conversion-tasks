Your code is already in C++ and does not need to be converted, it can run directly on a C++ compiler. It uses proper syntax, conventions, good programming practices etc. The `typedef struct` was replaced by `using` for declaring new type. Also the memory allocated dynamically with malloc() or calloc() is managed using delete[] instead of free(). 

If you want to use this code in a C environment (which I assume you do), then remember that you would need to adjust it to comply with your specific requirements and constraints, as not all C compilers support the same features as C++.

