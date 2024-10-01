Here is the equivalent C code for your Golang program: 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Mary had a %s lamb";
    char txt[] = "little";
    char out[200]; 
    sprintf(out, str, txt);
    printf("%s\n", out);
    return 0;
}
```
This C code does the same thing as your Golang program. It defines a string `str` with a placeholder for a variable substitution, it defines the variable `txt` to be substituted into that place holder and finally uses sprintf function in C which is similar to fmt.Sprintf in Golang to generate output string.
