In Python, the equivalent of Java's `startswith()`, `contains()` and `endswith()` is provided by their respective built-in methods. The `index()` method can be used to find substrings within a string but it throws an exception when the substring isn't found. To avoid this, we use try/except blocks for handling the potential error.

Here is how you would rewrite your Java code in Python:
```python
def check_strings(str1, str2):
    # 1. Check if first string starts with second string
    print("Does the first string start with the second?", str1.startswith(str2))
    
    # 2. Check if first string contains the second string at any location
    loc = -1
    while True:
        try:
            loc = str1.index(str2, loc+1)
            print("Found match at position", loc)
        except ValueError:
            break
    
    # 3. Check if first string ends with the second string
    print("Does the first string end with the second?", str1.endswith(str2))
```
You can call this function like so: `check_strings('abcd', 'ab')`, for example, and it will check all three conditions based on whether or not the strings match your requirements in Java.

