Sure, here's how you can convert the given Rust code into Python:

```python
print("Mary had a {} lamb".format("big"))
# You can specify order
print("{} had a {} lamb".format("Mary", "little"))
# Or named arguments if you prefer
print("{name} had a {adj} lamb".format(name="Mary", adj="little"))
```

This Python code does exactly the same as your Rust code, it uses string formatting to replace placeholders in a string with values. The `{}` inside the string are placeholders for values that will be inserted later. When you call `format`, you can specify what values should replace these placeholders.
