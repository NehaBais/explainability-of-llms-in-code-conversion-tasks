Here's the C code that accomplishes the same task:
```
#include 
int main() {
 char s[] = "12345678";
 char t[strlen(s) + 1]; // +1 for the null terminator
 
 strcat(t, "0");
 strcat(t, s);
 printf("%s", t);
 return 0;
}
```
This code first declares a string variable `s` that contains the text value `"12345678"`. It then declares another string variable `t` with a size equal to the length of `s` plus one for the null terminator. The `strcat()` function is used to concatenate the string literal `"0"` to the end of `t`, followed by the contents of `s`. Finally, the resulting string is printed to the console using the `printf()` function.

