The error occurs because the `strstr` function returns a pointer to a char, but the `printf` function expects a string literal. To fix the error, cast the result of `strstr` to a char pointer.

```c
printf("%.*s\n", m, (char*)strstr(s, sub) - s);
```
