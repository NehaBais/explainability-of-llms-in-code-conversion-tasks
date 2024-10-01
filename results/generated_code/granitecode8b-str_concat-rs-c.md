Here is the converted code from Rust to C:
```
#include 
#include 
int main() {
 char s[] = "hello";
 printf("%s", s);
 
 char s1[strlen(s) + strlen(" world") + 1];
 strcpy(s1, s);
 strcat(s1, " world");
 printf("%s", s1);
 
 return 0;
}
```
In this code, we first declare a character array `s` and assign it the value `"hello"`. We then print its contents using `printf()`.
Next, we declare another character array `s1` with a length equal to the length of `s` plus the length of the string literal `" world"` plus 1 (for the null terminator). We then copy the contents of `s` into `s1` using `strcpy()`, and concatenate `" world"` to `s1` using `strcat()`.
Finally, we print the contents of `s1`.

