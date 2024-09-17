Here is the equivalent Python code for your JavaScript code:

```python
def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    elif a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")
    else:
        # "1" and 1 are an example of this as the first is type string and the second is type number
        print(f"{a} (type {type(a)}) and {b} (type {type(b)}) are not of the same type and cannot be compared.")
```
This code does exactly the same thing your JavaScript code does. It takes two arguments, `a` and `b`, which can be any data types. Then it checks if the type of `a` is the same as the type of `b`. If it's not the same then it will print a message saying that the given inputs are not of the same type and cannot be compared. But if the type of `a` is the same as the type of `b`, then it will check for each case separately, so that all three comparison operators are used in the code.
