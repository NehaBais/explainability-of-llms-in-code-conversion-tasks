Here is the equivalent Python code for the given JavaScript code:

```python
def string_matching(stringA, stringB):
    # Determine if the first string starts with second string
    q1 = stringA.startswith(stringB)
    
    # Determine if the first string contains the second string at any location
    try:
        q2 = stringA.index(stringB)
        print("   The position of the match is:", q2)
    except ValueError:
        print("   No match found")
        
    # Multiple matches
    pattern = re.compile(stringB, re.IGNORECASE)  # Use case-insensitive search
    matches = pattern.findall(stringA)
    
    if matches:
        print("   Found", len(matches), "matches in the string.")
        for i, match in enumerate(matches):
            print(f"      Match found at index {match}.")
    else:
        print("   No matches found")
        
    # Determine if the first string ends with second string
    q3 = stringA.endswith(stringB)
    
    return q1, q2, q3

stringA = "tacoloco"
stringB = "co"

q1, q2, q3 = string_matching(stringA, stringB)

print("1: Does '"+stringA+"' start with '"+stringB+"'? ", q1)
print("2: Is '"+stringB+"' contained in '"+stringA+"'? ", q2)
print("   End with:", q3)
```
The function `string_matching` takes two strings as input, and returns three boolean values. The first value is whether the first string starts with the second, the second is whether the second string is a substring of the first, and the third is whether the first string ends with the second.

Note: This Python code uses regular expressions to find all occurrences of the second string in the first string. For this reason, it requires the `re` module which can be imported using `import re`.
