 The equivalent code in C would be:

```c
#include <stdio.h>
#define SIZE 256

int main() {
    char str[SIZE] = "Mary had a %s lamb";
    char txt[SIZE] = "little";
    char out[SIZE];
    
    sprintf(out, str, txt);
    printf("%s", out);
    
    return 0;
}
```
In this code, the preprocessor directive `#define SIZE 256` is used to define a constant for the maximum size of the string. The `sprintf` function is equivalent to Go's `fmt.Sprintf`, it takes two arguments - a char array and another char array, which are the target and source strings respectively. It writes the result of the string interpolation into `out`. 

Then, `printf` function is used to print the content of `out` on the console. This code will output "Mary had a little lamb".
