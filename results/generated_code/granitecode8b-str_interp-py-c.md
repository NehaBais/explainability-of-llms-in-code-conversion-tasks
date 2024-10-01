Here is the equivalent code in C:
```c
#include 
int main() {
 char extra[] = "little";
 char new_str[100];
 sprintf(new_str, "Mary had a %s lamb.", extra);
 printf("%s", new_str);
 return 0;
}
```
This code uses the `sprintf` function to perform string interpolation. The `%s` format specifier is used to indicate that the following argument is a string. The value of `extra` is inserted into the string in place of the `%s`. Finally, the interpolated string is printed using `printf`. Note that this code assumes that `new_str` has enough space to hold the interpolated string.

