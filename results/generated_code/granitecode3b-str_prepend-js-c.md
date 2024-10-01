Here's the C code that accomplishes the same task as the given JavaScript code:
```c
#include 
int main() {
 char s[] = "Hello";
 strcat(s, ", World");
 printf("%s", s);
 return 0;
}
```
Explanation:
- We declare a character array `s` with an initial value of `"Hello"`.
- We use the `strcat()` function to concatenate the string literal `", World"` to the end of `s`.
- Finally, we print the contents of `s` using the `printf()` function.

