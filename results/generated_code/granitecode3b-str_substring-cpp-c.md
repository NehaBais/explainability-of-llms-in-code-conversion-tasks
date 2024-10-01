Here's the C code that converts the given C++ code snippet:
```c
#include 
#include 
int main() {
 char const* s = "0123456789";
 int const n = 3;
 int const m = 4;
 char const c = '2';
 std::string const sub = "456";

 printf("%.*s
", m, s + n);
 printf("%s
", s + n);
 printf("%.*s
", (int)strlen(s) - 1, s);
 printf("%.*s
", m, strstr(s, c));
 printf("%.*s
", m, strstr(s, sub));
 return 0;
}
```
This code uses the `printf` function to display the substring in C. The `%.*s` format specifier is used to print a substring of `m` characters starting from index `n`. The `strlen` function is used to get the length of the string, and the `strstr` function is used to find the first occurrence of the substring.

