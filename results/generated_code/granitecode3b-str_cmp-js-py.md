Sure, here's the Python code that implements the comparison tasks you requested:
```python
# Comparing two strings for exact equality
print("abcd" == "abcd") # True
print("abcd" === "abcd") # True
# Comparing two strings for inequality
print(123 == "123") # True
print(123 === "123") # False
# Comparing two strings to see if one is lexically ordered before than the other
print("abcd" < "dcba") # True
# Comparing two strings to see if one is lexically ordered after than the other
print("abcd" > "dcba") # False
# Case insensitive comparison
print("ABCD" == "abcd".lower()) # True
```
In this Python code, we use the `==` operator to compare two strings for exact equality and the `===` operator to perform a strong comparison between values and types. We also use the `<` and `>` operators to compare two strings lexically. 
To perform case insensitive comparison, we can convert both strings to lowercase using the `lower()` method and then compare them using the `==` operator.
I hope this helps! Let me know if you have any other questions.

