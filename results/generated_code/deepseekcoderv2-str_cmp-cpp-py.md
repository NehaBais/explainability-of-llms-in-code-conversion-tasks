 Here's the equivalent Python code for the provided C++ code. This Python script demonstrates various string comparisons including case-sensitive and case-insensitive comparison, as well as numeric comparisons:

```python
import sys
from string import ascii_lowercase

def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'exactly ' if a == b else 'not exactly '}{semantically} equal.")
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} unequal.")
    print(f"{a} is {'not ' if not (a < b) else ''}{semantically} ordered before {b}.")
    print(f"{a} is {'not ' if not (a > b) else ''}{semantically} ordered after {b}.")

# Default values for the strings to be compared.
default_a = "1.2.Foo"
default_b = "1.3.Bar"
a = sys.argv[1] if len(sys.argv) > 1 else default_a
b = sys.argv[2] if len(sys.argv) > 2 else default_b

# Case-sensitive comparisons.
demo_compare(a, b, "lexically")

# Case-insensitive comparisons by folding both strings to a common case.
a_lower = a.lower()
b_lower = b.lower()
demo_compare(a_lower, b_lower, "lexically")

# Numeric comparisons; here 'float' could be any type for which the relevant conversion is defined.
numA = float(a)
numB = float(b)
demo_compare(numA, numB, "numerically")
```

### Explanation:
1. **Function `demo_compare`**: This function takes two arguments and a string indicating how the comparison is being made (lexically or numerically), then prints statements about equality, inequality, and order comparisons based on the provided strings.
2. **Default Values**: The script uses default values for `a` and `b` if command-line arguments are not provided.
3. **Case-Sensitive Comparison**: Direct string comparison is used to compare `a` and `b`.
4. **Case-Insensitive Comparison**: Both strings are converted to lowercase using the `.lower()` method before being compared.
5. **Numeric Comparison**: The script converts both strings to floats for numeric comparison.

This Python script provides similar functionality to the provided C++ code, demonstrating various string and numeric comparisons in a case-sensitive and case-insensitive manner.
