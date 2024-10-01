Here's the C code that accomplishes the same task as the Rust code:
```c
#include stdio.h
int main() {
 char s[] = "World";
 char new_s[strlen("Hello ") + strlen(s)];
 strcpy(new_s, "Hello ");
 strcat(new_s, s);
 printf("%sn", new_s);
 return 0;
}
```
This code first creates a string variable `s` with the value "World" using the `to_string()` method in Rust. It then declares a new string variable `new_s` that is twice as long as `s` and uses `strlen()` to determine its length. The `strcpy()` function is used to copy the string literal "Hello " into `new_s`, followed by `strcat()` to add the value of `s`. Finally, `printf()` is used to print out the resulting string.

