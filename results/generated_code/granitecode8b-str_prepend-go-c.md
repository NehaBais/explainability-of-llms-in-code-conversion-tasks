Here's the equivalent code in C:
```
char s[] = "world!";
sprintf(s, "Hello, %s", s);
```
In this code, we first declare a character array `s` and initialize it with the value `"world!"`. Then we use the `sprintf()` function to prepend the string literal `"Hello, "` to the contents of `s`, which results in the final string being `"Hello, world!"`. Note that we pass the address of `s` as the first argument to `sprintf()`, since we want to modify the original string.

