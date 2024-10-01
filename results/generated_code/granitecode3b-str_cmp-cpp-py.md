Sure! Here's the Python code that demonstrates how to compare two strings from within the language and how to achieve a lexical comparison.
```python
def demo_compare(a, b, semantically):
 print(f"{a} and {b} are {'not ' if a == b else ''}{semantically} equal.")
 print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} inequal.")
 print(f"{a} is {'not ' if a < b else ''}{semantically} ordered before {b}.")
 print(f"{a} is {'not ' if a > b else ''}{semantically} ordered after {b}.")
 
# Case-sensitive comparisons.
a = input("Enter the first string: ")
b = input("Enter the second string: ")
demo_compare(a, b, "lexically")
# Case-insensitive comparisons by folding both strings to a common case.
a = a.lower()
b = b.lower()
demo_compare(a, b, "lexically")
# Numeric comparisons; here 'double' could be any type for which the
# relevant >> operator is defined, eg int, long, etc.
numA = float(input("Enter the first number: "))
numB = float(input("Enter the second number: "))
demo_compare(numA, numB, "numerically")
```
The `demo_compare()` function takes three arguments: `a`, `b`, and `semantically`. It prints whether `a` and `b` are exactly equal, inequal, ordered before or after, based on the `semantically` argument.
In the code above, we first prompt the user to enter two strings to compare using the `input()` function. We then call the `demo_compare()` function with these two strings as arguments.
To demonstrate case-insensitive comparisons, we convert both `a` and `b` to lowercase using the `lower()` method. We then call the `demo_compare()` function again with the lowercased strings.
Finally, we prompt the user to enter two numbers to compare. We convert these numbers to a common type (in this case, `float`) using the `float()` function and pass them to the `demo_compare()` function.

