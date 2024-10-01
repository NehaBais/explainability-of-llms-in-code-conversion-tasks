 In Python, you can use the `==` operator to check for exact equality and the `<` or `>` operators to compare lexically. Python treats strings in a case-sensitive manner. For case-insensitive comparisons, use the `.lower()` method on one (or both) of the strings before comparing them.

Here's how you can translate the given JavaScript code into Python:

```python
print(
"abcd" == "abcd", # True
"abcd" is "abcd", # True
123 == "123", # True
123 is "123", # False
"ABCD" == "abcd", # False
"ABCD" != "abcd", # True
123 != "123", # False
123 is not "123", # True
"abcd" < "dcba", # True
"abcd" > "dcba", # False
"ABCD".lower() == "abcd".lower(), # True (case insensitive)
)
```
