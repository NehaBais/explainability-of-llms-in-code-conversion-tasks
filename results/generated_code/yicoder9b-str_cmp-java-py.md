Here's how you can convert the Java code to Python.
Please note that in Python there are no strict rules for comparing strings (like `equals` or `not equals`), but rather we use comparison operators (`==`, `!=`, etc). Also, numeric and lexical comparisons can be done at the same time:
```python
def compare(A: str, B: str):
    if A == B:
        print(f"'{A}' and '{B}' are lexically equal.")
    else:
        print(f"'{A}' and '{B}' are not lexically equal.")
    
    if A.lower() == B.lower():
        print(f"'{A}' and '{B}' are case-insensitive lexically equal.")
    else:
        print(f"'{A}' and '{B}' are not case-insensitive lexically equal.")
    
    if A < B:
        print(f"'{A}' is lexically before '{B}'.")
    elif A > B:
        print(f"'{A}' is lexically after '{B}'.")
    else:
        print(f"'{A}' and '{B}' are not ordered.")  # This should never be printed, A == B was caught first

compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
``` 

As you can see the comparison operators `==` and `!=` are used to compare strings for exact equality (`equals`) and inequality (`not equals`). The lower case version of these two strings is compared with the help of the function `lower()` to achieve a case-insensitive comparison. 
The less than and greater than operators (<, >) allow you to see if one string comes before or after the other in lexicographical order (also known as lexical order). If no condition is met then it means that strings are equal (`A == B`).
