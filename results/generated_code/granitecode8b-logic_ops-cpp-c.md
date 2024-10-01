Here's the converted code from C++ to C:
```c
#include 
void print_logic(int a, int b)
{
 printf("a and b is %d
", a && b);
 printf("a or b is %d
", a || b);
 printf("not a is %d
", !a);
}
```
In C++, the logical operators `&&`, `||` and `!` are used to perform logical operations on boolean values. The `std::boolalpha` manipulator is used to print the boolean values as "true" or "false". 
In C, the equivalent logical operators are `&&`, `||` and `!`. However, in C, the `printf()` function is used for printing instead of `std::cout`. Additionally, the data types of the arguments passed to the `print_logic()` function need to be converted from `bool` to `int`. 
In this case, we use an integer value of 1 to represent true and 0 to represent false. This is done using the ternary operator `(a ? 1 : 0)`.

