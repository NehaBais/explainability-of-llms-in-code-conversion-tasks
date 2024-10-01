Here is the equivalent Python code:

```python
s = "World".strip()
s = "Hello " + s
print(s)
```

This Python script does the same thing as your Rust code. It first creates a string `s` with the value "World". The call to `strip()` is used in case leading or trailing whitespace appears.
Then it prepends another string literal, "Hello ", to the start of the string `s`. 
Finally, it prints out the result.
