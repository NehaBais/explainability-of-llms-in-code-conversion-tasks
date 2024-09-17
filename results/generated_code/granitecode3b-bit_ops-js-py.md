Here's the Python code that performs the same operations as the JavaScript code you provided:
```python
def bitwise(a, b):
   print("a AND b:", a & b)
   print("a OR b:", a | b)
   print("a XOR b:", a ^ b)
   print("NOT a:", ~a)
   print("a << b:", a << b) # left shift
   print("a >> b:", a >> b) # arithmetic right shift
   print("a >>> b:", a >>> b) # logical right shift
```
In Python, the `&`, `|`, and `^` operators perform bitwise AND, OR, and XOR on their operands, respectively. The `~` operator performs a bitwise NOT on its operand. The `<<`, `>>`, and `>>>` operators perform left, arithmetic, and logical right shifts on their operands, respectively. To do a bitwise shift or rotate, you can use the `*` operator to multiply by the shift/rotate amount.

