Answer: Here is the Python code that converts the Rust code into Python, while preserving its functionality:

Python
Copy code
```python
print("Mary had a {} lamb".format("little"))  # Output: Mary had a little lamb
# You can specify order
print("{1} had a {0} lamb".format("little", "Mary"))  # Output: Mary had a little lamb
# Or named arguments if you prefer
print("{name} had a {adj} lamb".format(adj="little", name="Mary"))  # Output: Mary had a little lamb
```
