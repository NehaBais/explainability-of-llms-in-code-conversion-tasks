Here's the C code that accomplishes the same task:
```
#include 
int main() {
 char str[] = "12345678";
 strcat(str, "9!");
 printf("%s", str);
 return 0;
}
```
In this C code, we first declare a character array `str` with the value "12345678". Then, we use the `strcat()` function to append the string literal "9!" to the end of `str`. Finally, we print the contents of `str` using the `printf()` function.

