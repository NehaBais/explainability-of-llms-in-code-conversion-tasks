Below is the equivalent Python code for the given JavaScript function. Note that this conversion assumes a similar behavior between bitwise operations in JavaScript and Python. 

```python
def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a))
    print("a << b: ", a << b)  # left shift
    print("a >> b: ", a >> b)  # arithmetic right shift
    print("a >>> b: ", a >>>> b)  # logical right shift
```

Please note that the bitwise NOT operation (~) is performed using Python's built-in function `~` instead of tilde character.

Also, Python doesn't require parenthesis in certain situations (like bitwise AND & OR operations). It will automatically determine the order of operations based on operator precedence rules. So you can remove the parentheses as per your convenience. 

Note: The input values 'a' and 'b' are assumed to be integer values for this Python code conversion.
