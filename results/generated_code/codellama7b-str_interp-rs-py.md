To convert the Rust code to Python, you can use the `print()` function and string formatting. Here is an example of how to do this:
```
def main():
    print("Mary had a {} lamb".format("little"))
    # You can specify order
    print("{1} had a {0} lamb".format("Mary", "little"))
    # Or named arguments if you prefer
    print("{name} had a {adj} lamb".format(adj="little", name="Mary"))
```
Note that in Python, the `{}` characters are used to indicate where the values should be inserted. The first argument of the `format()` method is the string with the placeholders, and subsequent arguments are the values to be substituted for each placeholder.
