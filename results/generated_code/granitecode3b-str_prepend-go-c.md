Here's the equivalent C code:
```c
char s[] = "world!";
char s2[strlen("Hello, ") + strlen(s)];
sprintf(s2, "Hello, %s", s);
```
Explanation:
1. We declare a character array `s` to store the string value "world!".
2. We calculate the length of the string literal "Hello," and add it to the length of `s` using `strlen()`. We store this sum in the variable `s2_len`.
3. We use the `sprintf()` function to format a string into another string. The first argument is the destination string, which we set to `s2`, and the second argument is the format string, which we set to `"Hello, %s"`. The `%s` in the format string is replaced with the value of `s`.

