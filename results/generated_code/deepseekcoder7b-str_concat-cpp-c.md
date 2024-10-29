The equivalent code in C would look like this:

Please note, string concatenation is different in C from C++. In the following solution, we are assuming that the maximum length of strings (including null character) does not exceed 100 characters each.

```C
#include <stdio.h>
#include <string.h>

int main() {
   char s[] = "hello";
   printf("%s literal\n", s);
   
   char s2[104]; // We need to provide space for the new string and null character
   strcpy(s2, s); 
   strcat(s2, " literal");
   printf("%s\n", s2);
   
   return 0;
}
```
In C++, strings are objects that have their own methods (like `operator+`). In C, strings are just arrays of characters terminated by a null character. So to concatenate two strings in C, we need to use the strcpy for copying and strcat for concatenation. The length limit is often defined as some constant at the start of program like 100 or 256 etc.

