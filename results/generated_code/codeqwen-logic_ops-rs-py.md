Here is the Python equivalent of your Rust code:

```python
def boolean_ops(A: bool, b: bool):
    print("{} and {} -> {}".format(A, b, A and b))
    print("{} or {} -> {}".format(A, b, A or b))
    print("{} xor {} -> {}".format(A, b, A != b))  # Using '!=' operator for XOR as Python doesn't have a built-in '^' operator for boolean values
    print("not {} -> {}".format(A, not A))

def main():
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)

main()
```
In Python:
- boolean 'and' is represented as `A and b`. 
- boolean 'or' is represented as `A or b`.
- boolean 'not' is represented as `not A`.
- XOR operator in Python is `!=` (not equals). Note that this operator performs a bitwise XOR operation on integers if both operands are integers, but for booleans it checks whether the values are not equal.
