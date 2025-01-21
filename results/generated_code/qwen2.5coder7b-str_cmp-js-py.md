Here is how you can convert the JavaScript code to Python:

```python
print(
"abcd" == "abcd", # True
123 == "123", # True
123 == str(123), # False
"ABCD" == "abcd", # False
"ABCD" != "abcd", # True
123 != "123", # False
123 is not "123", # True
"abcd" < "dcba", # True
"abcd" > "dcba", # False
"ABCD".lower() == "abcd".lower(), # True (case insensitive)
)
```

Python uses double equals sign `==` for value comparison and triple equals sign `===` is not used as Python does not have this distinction. 

In Python, all types are compared using their values. This means that Python treats numeric strings lexicographically the same way it treats non-numeric strings. So, `123 == "123"` returns `True`, because both sides of the comparison have a value of `123`. However, `123 is not "123"` returns `True` because `is` checks identity rather than equality in Python.

Python also uses the `<` and `>` operators for lexicographical comparisons. 

Case insensitive comparison can be achieved by calling the lower() or upper() method on a string before performing the comparison.
