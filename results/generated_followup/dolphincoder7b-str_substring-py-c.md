The error occurs because we cannot combine two different variable declarations in the same C statement. In Python, we can use the `char` type to store individual characters, which is equivalent to a single-byte string in C. However, in C, a character literal must be an integer value. So when we declare char char  = 'd'; in C, it tries to interpret "d" as an integer and this causes the error.
To fix this issue, we need to change the variable declaration to char *char = "d"; which allows us to store a string of one character. Now that we have fixed the declaration, we can modify the rest of the code to use the correct variable name.

Here is the adjusted version of the C code:

```c
#include <assert.h>
#include <stdio.h>
#include <string.h>
int main() {
  char s[]  = "abcdefgh";
  int n, m;
  // char char  = 'd';
  char *char_var = "d";
   char chars[]  = "cd";

  // starting from n=2 characters in and m=3 in length
  printf("%.*s\n", m, &s[n - 1]);

  // starting from n characters in, up to the end of the string
  if (strlen(&s[n]) > 0) {
    printf("%s\n",  &s[n - 1]);
   } else  {
    printf("empty string\n");
   }

   // whole string minus last character
   printf("%.*s\n", (int)strlen(s) - 1, s);

   // starting from a known character char="d" within the string and of m length
   int indx  = strchr(s, 'd')  - s;
  if  (strlen(&s[indx]) > 0 && strlen(&s[indx + m  - 1])  > 0) {
    printf("%.*s\n", m, &s[indx]);
   } else  {
    printf("invalid substring selection\n");
   }

   // starting from a known substring chars="cd" within the string and of m length. 
   indx  = strstr(s, "cd")  - s;
  if (strlen(&s[indx]) > 0 && strlen(&s[indx + m  - 1])  > 0) {
    printf("%.*s\n", m, &s[indx]);
   } else  {
    printf("invalid substring selection\n");
   }

  return 0;
}
```
