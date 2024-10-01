Here's the equivalent C code for the given JavaScript code:
```
#include 
int main() {
 char s1[] = "Hello";
 strcat(s1, ", World!");
 printf("%s", s1);
 return 0;
}
```
Explanation:
The C code first declares a character array `s1` with the initial value of "Hello". Then, it uses the `strcat()` function to append the string literal ", World!" to the end of `s1`. Finally, it prints the contents of `s1` using `printf()`.

