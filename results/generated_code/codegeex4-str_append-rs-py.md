In Python, the idiomatic way to append a string is using the '+' operator or the '+=' operator. Also, in Python, the print statement is used instead of the println! macro from Rust.

Here's how you can convert your code:

```python
hello = "Hello world" + "!!!!"
print(hello)

# Or

hello = "Hello world"
hello += "!!!!"
print(hello)
```

Both will output `Hello world!!!!`.
