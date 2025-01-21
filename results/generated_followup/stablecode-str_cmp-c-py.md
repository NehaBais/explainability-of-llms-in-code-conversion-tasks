The error is in the usage of an f-string, which is a way to format strings in Python 3.6 and above.

In this case, the error is caused by having unmatched parentheses inside the f-string's expression. The fix for this issue is to properly balance the parentheses inside the expression.

Here's the corrected code:
```python
def compare(a, b):
    print(f"{a:<20} ==== {b:<20} : {bool(0==strcmp((A),(B))))")


def compare_case(a, b):
    print(f"{a:<20} ignoring case ==== {b:<20} ignoring case : {bool(0==strcasecmp((A),(B))))"})


# Example usage
a = "./c"
b = "./C"
compare(a, b)
compare_case(a, b)
```
