Here's the Python equivalent of your C++ code:

```python
def print_logic(a, b):
    print("a and b is", a and b)
    print("a or b is", a or b)
    print("not a is", not a)
    
# Testing the function
print_logic(True, False)  # Replace with any boolean values you want to test.
```
In Python, `and` and `or` are used as logical operators whereas in C++ we use `&&` and `||` respectively. The `not` operator works similarly in both languages. Note that the print statement in python directly prints outputs without needing a newline character at the end like in cpp. So there's no need for '\n'.

