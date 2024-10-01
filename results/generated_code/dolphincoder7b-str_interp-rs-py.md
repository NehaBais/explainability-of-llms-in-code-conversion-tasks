The Python code equivalent of the given Rust code is as follows:

```python
def main():
    print("Mary had a {} lamb".format("little"))
    # You can specify order
    print("{1} had a {0} lamb".format("little", "Mary"))
    # Or named arguments if you prefer
    print("{name} had a {adj} lamb".format(adj="little", name="Mary"))
```

The `{}` syntax in Python is used for string formatting and the values passed inside the curly braces will be replaced by corresponding arguments passed to the `.format()` method. The order of arguments matters, but you can specify names if necessary. The code also demonstrates how to use named arguments when calling the `.format()` function.
