Here's the equivalent C code for the given Python code snippet:
```c
#include 
int main() {
 char *extra = "little";
 char new_str[100];
 sprintf(new_str, "Mary had a %s lamb.", extra);
 printf("%s", new_str);
 return 0;
}
```
The C code uses the `sprintf` function to interpolate the value of `extra` into the string. The resulting interpolated string is stored in the `new_str` variable, which is then printed to the console using the `printf` function.

