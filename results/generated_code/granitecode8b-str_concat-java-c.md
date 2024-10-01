Here is the converted code from Java to C:
```
#include 
int main() {
 char s[] = "hello";
 printf("%s literaln", s);
 char s2[50];
 sprintf(s2, "%s literal", s);
 printf("%sn", s2);
 return 0;
}
```
In this code:
- We declare a character array `s` and initialize it with the string "hello".
- We use the `printf` function to print the value of `s` concatenated with the string literal "literal".
- We declare another character array `s2` with a size of 50 characters.
- We use the `sprintf` function to concatenate the value of `s` with the string literal "literal" and store the result in `s2`.
- We use the `printf` function again to print the value of `s2`.

