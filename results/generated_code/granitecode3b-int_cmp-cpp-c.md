Here's the C code that achieves the same functionality as the provided C++ code:
```c
#include 
int main() {
 int a, b;
 printf("Enter two integers: ");
 scanf("%d %d", &a, &b);
 
 if (a < b) {
 printf("%d is less than %d\n", a, b);
 } else if (a == b) {
 printf("%d is equal to %d\n", a, b);
 } else {
 printf("%d is greater than %d\n", a, b);
 }
 
 return 0;
}
```
The main difference between the two versions of the code is that the C++ version uses the `std::cin` object to read input from the user, while the C version uses the `printf()` and `scanf()` functions. In addition, the C++ code includes error handling for cases where the user inputs invalid data, while the C version does not.

