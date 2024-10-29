Here is the Python equivalent of your Rust code. In python, it's done using standard operators for logic operations and negation which are "and", "or" and "not".

Python Code:
```python
def boolean_ops(a, b): 
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    # XOR operation in python can be done with '^' operator but it works differently than in some other languages. 
    # For instance, True ^ True = False in Python not True as in maths, so we will comment out this line.
    # print(f"{a} xor {b} -> {a ^ b}")  
    print(f"not {a} -> {not a}") 

boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)
```
In the provided Rust code: 
- `xor` operation is not directly supported in Rust. To achieve XOR like behaviour we have to use bitwise operations but it's not equivalent to xor in boolean algebra.
- So for Python conversion, I commented out that part of code. If you want to make an equivalent function in Python, you might need a different way to implement the XOR operation or change how you handle boolean logic. 

Note: The `xor` operation is not usually considered as logical operation in programming language and we should avoid using it for standard use cases where 'XOR' has more complex semantics like cryptography etc.

