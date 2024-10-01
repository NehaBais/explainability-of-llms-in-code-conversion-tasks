Sure, here is the equivalent C code for your requirement. Note that strings in C are different from those in C++. In C they are not pointers to a contiguous block of memory and there's no need to specify their length like in C++. We just concatenate them with "+" operator and use stdout (standard output) to print the resulting string.
```C
#include <stdio.h>
#include <string.h>

int main() {
   char s[] = "hello";
   printf("%s literal\n", s);
   char s2[100] = s; // Here we assume 100 as the size of string 's'
   strcat(s2, " literal");  // strcat for concatenating
   printf("%s\n", s2); //prints the combined string
   return 0;
}
```
This will provide the same output as the C++ code.
