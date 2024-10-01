Sure! Here's the Python code that does the same thing as the Rust code:
```python
def boolean_ops(a, b):
    print("{} and {} -> {}".format(a, b, a and b))
    print("{} or {} -> {}".format(a, b, a or b))
    print("{} xor {} -> {}".format(a, b, a ^ b))
    print("not {} -> {}".format(a, not a))

boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)
```
This code defines a function called `boolean_ops` that takes two boolean arguments, `a` and `b`. It then uses the built-in Python operators to perform the logical operations on the arguments and print the results. The `not` keyword is used to invert the boolean value of `a`. 
When you run this code, it will output:
True and True -> True
True or True -> True
True xor True -> False
not True -> False
False and True -> False
False or True -> True
False xor True -> True
not False -> True

