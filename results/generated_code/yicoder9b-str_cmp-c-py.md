In Python we can use the `==` operator to check equality and the `!=` operator for inequality. The lexical comparison operators are handled by the language implicitly when comparing strings using `>` or `<`. For case insensitive comparisons, the `lower()` function is used on each string before comparison. Below is a Python equivalent of your C code:
```python
# Demonstration
str1 = "ball"
str2 = "bell"
print(f'{str1} == {str2}:', str1==str2)  # Check exact equality
print(f'{str1} != {str2}:', str1!=str2) # Check inequality
print(f'{str1} < {str2}:', str1<str2)    # Check if one is lexically ordered before the other
print(f'{str1} > {str2}:', str1>str2)    # Check if one is lexically ordered after the other

# Case sensitive comparisons
print('Case insensitive comparison:')
str3 = "YUP"
str4 = "yep"
print(f'{str3} == {str4}:', str3.lower()==str4.lower())  # Check exact equality case insensitivity
print(f'{str3} != {str4}:', str3.lower()!=str4.lower()) # Check inequality case insensitivity
print(f'{str3} < {str4}:', str3.lower()<str4.lower())    # Check if one is lexically ordered before the other case insensitivity
print(f'{str3} > {str4}:', str3.lower()>str4.lower())    # Check if one is lexically ordered after the other case insensitivity
```
