Here is the Python equivalent of your JavaScript code:

```python
def logic(A, B):
    print("A AND B: ", A and B)
    print("A OR B: ", A or B)
    print("NOT A: ", not A)
```

Note that in Python, the `and`, `or` keywords work differently than JavaScript's. In Python, both operands of a binary `and` or `or` operation need to be boolean values. If they aren't, Python will raise a TypeError. In contrast, JavaScript allows for non-boolean values to be passed to these operations and it coerces them to boolean before executing the logic.
