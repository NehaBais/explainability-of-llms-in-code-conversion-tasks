The error occurs because the `strstr` function returns a pointer to the first occurrence of the substring in the string. In C, the return type of `strstr` is a pointer to a character, but in C++, it is a pointer to a null-terminated character array.

The fix is to cast the pointer returned by `strstr` to a `const char *`.

```c
const char *loc = strstr(s2, s3);
```
