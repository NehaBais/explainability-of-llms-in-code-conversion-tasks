Here's the converted C code that meets your requirements:
```
#include 
int main() {
 char* s = ", World";
 char* result = "Hello";
 strcat(result, s);
 printf("%s", result);
 return 0;
}
```
This code creates a string variable `s` with the value ", World" using a string literal. It then creates another string literal called `result` and concatenates it with `s` using the `strcat()` function from the C standard library. Finally, it prints the resulting string to the console using `printf()`.

