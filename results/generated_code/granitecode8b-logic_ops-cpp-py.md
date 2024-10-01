Here's the Python code that achieves the same functionality as the given C++ code:
```
def print_logic(a, b):
 print("a and b is", a and b)
 print("a or b is", a or b)
 print("not a is", not a)
```
The `print_logic` function takes two arguments, `a` and `b`, which are assumed to be boolean values. It then uses the logical operators `and`, `or`, and `not` to compute the results of these operations on the input values. The `std::boolalpha` line in the C++ code is not necessary in Python because booleans are automatically converted to strings when printed.

