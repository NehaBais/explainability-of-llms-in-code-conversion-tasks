#### Code - 
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
#### Output - 
true and true -> True
true or true -> True
true xor true -> False
not true -> False
true and false -> False
true or false -> True
true xor false -> True
not false -> True
false and true -> False
false or true -> True
false xor true -> True
not true -> False
false and false -> False
false or false -> False
false xor false -> False
not false -> True

