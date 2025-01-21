This problem doesn't seem to be related to Python or C++ since the question asks for the conversion of an operation from one language (Python) into another (C++). However, if it was, here is how the Python code could be translated into C++:

```python
def compare(a, b):
    print("
%r is of type %r and %r is of type %r"
          % (a, type(a), b, type(b)))
    if a <  b:      print('%r is strictly less than  %r' % (a, b))
    if a <= b:      print('%r is less than or equal to %r' % (a, b))
    if a >  b:      print('%r is strictly greater than  %r' % (a, b))
    if a >= b:      print('%r is greater than or equal to %r' % (a, b))
    if a == b:      print('%r is equal to %r' % (a, b))
    if a != b:      print('%r is not equal to %r' % (a, b))
    if a is b:      print('%r has object identity with %r' % (a, b))
    if a is not b:  print('%r has negated object identity with %r' % (a, b))

compare('YUP', 'YUP')
compare('BALL', 'BELL')
compare('24', '123')
```
In C++, this code is exactly the same as Python. The only difference is that we need to include `<iostream>` for printing to console and `<typeinfo>` for checking types of variables. However, in terms of lexical comparison or equality checks on string type variables, it will still work with similar logic applied according to the comparison operators (<, <=, >, >=). The identity of references to objects (variables that are stored as a reference, not the object itself) is handled similarly, because in C++ there's no built-in way to differentiate a variable and its object.
