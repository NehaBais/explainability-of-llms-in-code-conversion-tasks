The equivalent Python code for the given Rust code is as follows:
```python
print("Mary had a {} lamb".format("little"))
# You can specify order
print("{1} had a {0} lamb".format("little", "Mary"))
# Or named arguments if you prefer
print("{name} had a {adj} lamb".format(adj="little", name="Mary"))
```
In Python, the `format()` method allows you to format strings in several ways. You can use positional arguments, which are specified by their position inside the string, or keyword arguments, which are specified by their names.
