```
# Python code

if __name__ == "__main__":
    extra = "big"
    print("Mary had a {} lamb.".format(extra))
```
Explanation:

The C code defines a variable `extra` with the value `"little"`. It then uses `printf()` to print a string containing the interpolation of `%s`, which is replaced by the value of `extra`.

In Python, we use the `.format()` method to perform string interpolation. The syntax for this method is similar to that of C's `printf()`, but it is more flexible and powerful. In this case, we pass a string containing a single format specifier (`{}`), which is replaced by the value of the variable `extra`.

Note that in Python, strings are immutable, so we can't modify them in place like we can in C with `printf()`. Instead, we use the `.format()` method to create a new string with the interpolated value.
