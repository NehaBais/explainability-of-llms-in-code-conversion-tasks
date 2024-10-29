The Python version of the given JavaScript code would look like this. The functionality is pretty much similar in both languages as they are designed to behave similarly when comparing strings. It includes all the operations you requested for including case sensitive and case insensitive comparisons, lexical ordering checks, and so on. 
```python
print(
"abcd" == "abcd", # true
"abcd" is "abcd", # true
123 == "123", # false (Python compares type with value, while JavaScript does not)
123 != "123", # true
"ABCD" == "abcd", # false 
"ABCD"!= "abcd", # true
123 != "123", # true (Python compares type with value, while JavaScript does not)
123 is not "123", # true (In Python, `is not` checks if the values do not point to the same object in memory.)
"abcd" < "dcba", # false 
"abcd" > "dcba", # true 
"ABCD".lower() == "abcd".lower(), # true  (case insensitive)
)
```
Python also supports lexical comparison of strings, as it treats them like sequences of character. In Python, `<` and `>` operators will compare the strings in lexographical order i.e., based on their dictionary order, which is different from numeric or any other data type. 

In addition to comparing string values for equality (==), inequality (!=), less than (<), greater than(>) Python also provides `is` and `is not` operators that compare the identity of objects i.e., whether they are the same object in memory. This is different from comparison, where it checks if two objects have the same value.

Lastly, case insensitive comparisons can be achieved with .lower() method. It transforms all characters to lowercase and then compares strings.

