Here's the C code that accomplishes the same task as the given JavaScript code:
```c
#include 
int main() {
 char s[] = "hello";
 char t[strlen(s) + 6]; // Add 6 to account for the additional characters needed for the string literal.
 strcpy(t, s);
 strcat(t, " there!");
 printf("%s", t);
 return 0;
}
```
In this code, we first declare a character array `s` with the value "hello". We then create another character array `t` that is twice as long as `s`, to hold the concatenated string. We use `strlen(s)` to determine the length of `s` and add 6 characters to account for the additional string literal. We then copy the contents of `s` into `t` using `strcpy`. Finally, we append the string " there!" to `t` using `strcat`, and print out the contents of `t` using `printf`.

