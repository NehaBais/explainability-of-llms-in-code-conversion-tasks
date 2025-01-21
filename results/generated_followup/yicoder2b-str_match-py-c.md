The error message "unknown type name 'def'" means that Python does not recognize the keyword 'def' for defining functions. It's used to define a function in Python, but you wrote it after the definition of the variable `string_matching` which does not exist yet. This will lead to a compile-time error.

The error message "expected function body" means that there is no body for your function. A function in python should have a body enclosed between two indents. The current code doesn't seem to have one, hence this error.

Here is the corrected version of your Python code:
```python
def string_matching(s):
    if s == "abcd":
        print('abcd')
    elif 'ab' in s:
        print('contains ab')
    elif s.endswith('abc'):
        print('ends with abc')
    else:
        print('no match found')
```
For your optional requirements, you did a good job! The error messages were helpful and pointed out the potential issues. You also implemented some condition checks to handle different scenarios (`bb` does not exist in `abab`).
