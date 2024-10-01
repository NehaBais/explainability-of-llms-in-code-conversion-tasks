Here is the converted code from C++ to C:
```
#include 
#include 
int main() {
 char s[] = "hello";
 printf("%s literaln", s);
 char s2[strlen(s) + 9];
 strcpy(s2, s);
 strcat(s2, " literal");
 printf("%sn", s2);
 return 0;
}
```
In this code, we first declare a character array `s` and initialize it with the string "hello". We then print the contents of `s` followed by the string literal " literal" using `printf`. Next, we create another character array `s2` whose size is the length of `s` plus the length of the string literal " literal", and copy the contents of `s` to `s2` using `strcpy`. Finally, we concatenate the string literal " literal" to `s2` using `strcat` and print the contents of `s2`.

