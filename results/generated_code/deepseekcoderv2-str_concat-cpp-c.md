Answer: Here is the C code that performs similar operations. Please note - string in C is char array and no direct support for concatenation but it can be done using a function called strcat() to concatenate two strings. This program also shows how printf() works like cout in C++. I hope you find this information useful.
```
#include <stdio.h>

int main() {
   char s[] = "hello";
   printf("%s literal\n", s);
   strcat(s, " literal");
   printf("%s\n", s);
   return 0;
}
```
