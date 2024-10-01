Sure! Here's the C code that performs the same operation as the Rust code:
```c
#include 
int main() {
 char *s = "hello";
 printf("%s", s);
 char s1[20];
 sprintf(s1, "%s world", s);
 printf("%s", s1);
 return 0;
}
```
In this C code, we first create a string variable `s` and assign it the value "hello" using the `char *` data type. We then use the `printf` function to print the value of `s`.
Next, we create another string variable `s1` and assign it the concatenation of `s` and the string literal " world". We use the `sprintf` function to perform the concatenation and store the result in `s1`. Finally, we use the `printf` function again to print the value of `s1`.
Note that we have used a buffer of size 20 for `s1` to ensure that the concatenation does not exceed this limit. You can adjust the buffer size as needed.

