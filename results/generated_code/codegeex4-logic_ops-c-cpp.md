The C++ version of the code would be:

```cpp
#include<iostream>

void print_logic(bool a, bool b)
{
  std::cout << "a and b is " << (a && b) << std::endl;
  std::cout << "a or b is " << (a || b) << std::endl;
  std::cout << "not a is " << (!a) << std::endl;
}
``` 

Please note that in C++, boolean values are represented as `bool` instead of `int`. Therefore, the function parameters and the results of logical operations (`&&`, `||`, `!`) are all of type `bool`.

Also, `printf()` is a C language standard library function used to print formatted output. In contrast, C++ provides `std::cout` which can be used for similar purposes. Moreover, `std::endl` is equivalent to `\n` and forces an output buffer flush, just like in the `printf()` case.

This code would use the `iostream` header file, which includes declarations for all standard I/O stream objects and classes. It's a more modern and flexible way of handling input/output operations compared with `stdio.h`.
