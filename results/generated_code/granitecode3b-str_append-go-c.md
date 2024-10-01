Here's the C code that converts the Golang code:
```
#include 
#include 
int main() {
 char s[] = "foo";
 strcat(s, "bar");
 printf("%s", s);
 return 0;
}
```
This code uses the `strcat` function from the `string.h` header file to append the string literal `"bar"` to the end of the string variable `s`. The resulting string is then printed using the `printf` function.

