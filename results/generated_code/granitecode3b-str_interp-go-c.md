Here's the C code that performs string interpolation using the `printf` function:
```c
#include 
int main() {
 char str[] = "Mary had a %s lamb";
 char txt[] = "little";
 char out[100];
 
 sprintf(out, str, txt);
 printf("%s", out);
 
 return 0;
}
```
In this code, we define a string `str` and a variable `txt`, which represents the original string and the value to be interpolated, respectively. We then declare an array `out` of size 100 to store the interpolated string. Finally, we use the `sprintf` function to perform string interpolation and print the result using the `printf` function.

