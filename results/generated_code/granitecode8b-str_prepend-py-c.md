Here is the converted code from Python to C:
```
#include 
int main() {
 char s[] = "12345678";
 char* prepend_string = "0";
 strcat(prepend_string, s);
 printf("%s", prepend_string);
 return 0;
}
```
This code creates a string variable `s` with the value `"12345678"`, and then prepends it with another string literal `"0"` using the `strcat()` function. Finally, it prints the concatenated string using `printf()`.

