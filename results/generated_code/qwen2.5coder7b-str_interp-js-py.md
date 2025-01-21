In Python, you can use f-strings for string interpolation which is also known as formatted string literals. Here is how you can convert the given JavaScript code to Python:

```python
original = "Mary had a X lamb"
little = "little"
replaced = original.replace("X", little) #does not change the original string
```

In this Python code, `replaced` will hold the value `"Mary had a big lamb"`.

Another way to do string interpolation in Python is by using f-strings:

original = "Mary had a X lamb"
little = "big"
replaced = f"{original.replace('X', little)}"

In this code, `replaced` will also hold the value `"Mary had a big lamb"`. The difference is that with f-strings, you can directly include expressions inside string literals by prefixing them with 'f' or 'F'.
