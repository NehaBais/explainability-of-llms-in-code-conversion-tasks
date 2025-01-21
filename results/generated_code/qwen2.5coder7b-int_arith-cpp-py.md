Here is the Python equivalent of your C++ code:

```python
a, b = map(int, input("Enter two integers: ").split())
print(f"a + b = {a+b}")
print(f"a - b = {a-b}")
print(f"a * b = {a*b}")
print(f"a // b = {a//b}, remainder {a%b}")
```

For exponentiation in Python, you can use the `**` operator. However, there is no built-in operator for integer division that rounds towards negative infinity like `/` does in C++. Instead, Python's floor division operator `//` performs this operation.

Note: The sign of the remainder in Python matches the sign of the first operand, which is different from C++ where it matches the sign of the second operand.
