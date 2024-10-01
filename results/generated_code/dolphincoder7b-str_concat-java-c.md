This is how the equivalent C code would look like:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char s[] = "hello";

   printf("%s literal\n", s);
   char s2[strlen(s) + 7]; // This line doesn't compile in C++ due to the size of 's'.
   strcpy(s2, s);
   strcat(s2, " literal");

   printf("%s\n", s2);
   
   return 0;
}
```
In this code, we declare a character array `s` and another character array `s2`. We initialize the first string with the value `"hello"` using strcpy() function. Then we concatenate the string `s` to the literal string " literal" using strcat() function. Finally we print both the strings.
The `strlen(s) + 7` part calculates the size of the s2 array based on the length of the s array plus the extra characters needed for the concatenation. This is necessary because in C language, arrays don't keep track of their size and you need to specify it manually if you want to concatenate strings.
