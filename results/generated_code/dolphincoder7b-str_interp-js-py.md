```python
original = "Mary had a X lamb."
little = "little"
replaced = original.replace("X", little)  # doesn't change the original string
print(replaced)
```
In Python, we use string interpolation by using f-strings. The `replace()` method in Python does not modify the original string. It creates a new one and returns it. We need to assign this result to another variable if we want to keep the original unchanged.
