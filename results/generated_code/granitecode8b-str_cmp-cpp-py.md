Here is the converted code from C++ to Python:
```python
import re
def demo_compare(a, b, semantically):
 print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} equal.")
 print(f"{a} and {b} are {'not ' if a == b else ''}{semantically}inequal.")
 print(f"{a} is {'not ' if a < b else ''}{semantically} ordered before {b}.")
 print(f"{a} is {'not ' if a > b else ''}{semantically} ordered after {b}.")
def compare_strings(a, b):
 demo_compare(a, b, "lexically")
 
 # Case-insensitive comparisons by folding both strings to a common case.
 a = re.sub(r'[A-Z]', lambda m: chr(ord(m.group()) + 32), a)
 b = re.sub(r'[A-Z]', lambda m: chr(ord(m.group()) + 32), b)
 demo_compare(a, b, "lexically")
 
 # Numeric comparisons; here 'double' could be any type for which the
 # relevant >> operator is defined, eg int, long, etc.
 numA = float(re.sub(r'[^0-9.]', '', a))
 numB = float(re.sub(r'[^0-9.]', '', b))
 demo_compare(numA, numB, "numerically")
 return a == b
```
In this Python code, I used regular expressions to perform case-insensitive string comparisons and numeric comparisons. The `demo_compare` function takes three arguments: two strings to compare and a string indicating the type of comparison (e.g., "lexically", "numerically").
To perform lexical comparisons, I used the `==`, `!=`, `<`, and `>` operators to compare the two strings. To perform case-insensitive comparisons, I used the `re.sub` function to replace all uppercase letters with their lowercase equivalents and then compared the resulting strings. Finally, to perform numeric comparisons, I used regular expressions to remove any non-numeric characters from the strings and then converted them to floating point numbers using the `float()` function.

