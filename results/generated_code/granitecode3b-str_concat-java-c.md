Here's the C code that accomplishes the same task as the Java code:
```c
#include 
int main() {
 char s[] = "hello";
 printf("%s literal", s);
 char s2[strlen(s) + 6];
 strcpy(s2, s);
 strcat(s2, " literal");
 printf("%s", s2);
 return 0;
}
```
In this C code, we first define a string variable `s` and initialize it with the value "hello". We then print the original string using the `printf` function.
Next, we create another string variable `s2` that is twice the length of `s`. We use the `strlen` function to get the length of `s` and add 6 characters (for the literal "literal") to get the required length for `s2`. We then copy the contents of `s` into `s2` using the `strcpy` function. Finally, we append the literal string " literal" to `s2` using the `strcat` function and print the result using the `printf` function.

