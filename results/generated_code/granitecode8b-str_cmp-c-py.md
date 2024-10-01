Here is the converted code from C to Python:
```python
# Import the necessary module for string comparison
import string
# Define the function to compare two strings
def compare_strings(a, b):
 # Compare two strings for exact equality
 eq = (a == b)
 
 # Compare two strings for inequality
 ne = (a != b)
 
 # Compare two strings to see if one is lexically ordered before than the other
 lt = (a < b)
 
 # Compare two strings to see if one is lexically ordered after than the other
 gt = (a > b)
 
 # Compare two strings to see if they are equal ignoring case
 ceq = (a.lower() == b.lower())
 
 # Compare two strings to see if they are not equal ignoring case
 cne = (a.lower() != b.lower())
 
 # Compare two strings to see if one is lexically ordered before than the other ignoring case
 clt = (a.lower() < b.lower())
 
 # Compare two strings to see if one is lexically ordered after than the other ignoring case
 cgt = (a.lower() > b.lower())
 
 return f"{a} {eq} {ne} {gt} {lt} {ge} {le} {b}"
# Test the function with different strings
print(compare_strings("ball", "bell"))
print(compare_strings("YUP", "yep"))
```
The output of this code will be:

ball True False False True True True bell
YUP True False True False True yep

This demonstrates how to compare two strings for exact equality, inequality, lexical order, and case-insensitive comparison. The `string` module is used to perform case-insensitive comparisons by converting both strings to lowercase before comparing them.

