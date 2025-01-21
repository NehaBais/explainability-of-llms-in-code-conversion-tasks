To convert the given Rust code to Python, we can use the `str.format()` method or f-strings for string interpolation. Here is how the Python equivalent would look:

```python
def main():
    # Using str.format()
    print("Mary had a {} lamb".format("big"))

    # Using named arguments
    print("{name} had a {adj} lamb".format(name="little", adj="big"))

if __name__ == "__main__":
    main()
```

This Python code achieves the same functionality as the Rust code by using string interpolation to replace placeholders with values. The `str.format()` method is used for simple cases, while f-strings (introduced in Python 3.6) provide a more readable and concise way to do this.
