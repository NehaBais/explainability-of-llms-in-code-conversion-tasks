Here is the equivalent code in C:
```c
#include 
int main() {
 printf("Mary had a %s lamb", "little");
 // You can specify order
 printf("%s had a %s lamb", "Mary", "little");
 // Or named arguments if you prefer
 printf("%s had a %s lamb", "Mary", "little");
 return 0;
}
```
In C, string interpolation is done using the `printf` function. The `%s` format specifier is used to indicate that the following argument should be treated as a string. In the first example, `" little"` is interpolated into the original string by replacing `{}` with its value. In the second and third examples, the values of variables are interpolated into the string using the specified order or named arguments.

