Here's the equivalent Python code for the given Rust code:
```python
print("Mary had a {} lamb".format("little"))
# You can specify order
print("{1} had a {0} lamb".format("little", "Mary"))
# Or named arguments if you prefer
print("{name} had a {adj} lamb".format(adj="little", name="Mary"))
```
In this Python code, we use the `str.format()` method to perform string interpolation. We pass in the values or variables as arguments to the `format()` method and replace the defined character sequences in the string with their corresponding values. The order of the arguments passed to `format()` can be specified using positional arguments (e.g., `{0}` for the first argument, `{1}` for the second argument, etc.). Alternatively, we can use named arguments (e.g., `{adj}` and `{name}`) to specify the values or variables by name.

