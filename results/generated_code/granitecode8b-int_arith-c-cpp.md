Here is the converted code from C to C++:
```
#include 
#include 
int main(int argc, char *argv[]) {
 int a, b;
 if (argc < 3) exit(1);
 b = atoi(argv[--argc]);
 if (b == 0) exit(2);
 a = atoi(argv[--argc]);
 std::cout << "a+b = " << a + b << std::endl;
 std::cout << "a-b = " << a - b << std::endl;
 std::cout << "a*b = " << a * b << std::endl;
 // C99 standard: rounds towards 0 (towards negative infinity if negative)
 std::cout << "a/b = " << static_cast(double>(a) / b) << std::endl; 
 // C99 standard: same sign as first operand
 std::cout << "a%%b = " << a % b << std::endl;
 return 0;
}
```
Note that in C++, the `static_cast` operator is used to explicitly cast the result of the division operation to a `double` type, which ensures that the quotient rounds towards zero. The remainder operator `%` also has the same sign as the first operand in C99.

