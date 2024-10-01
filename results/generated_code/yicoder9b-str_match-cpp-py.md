Here is the Python equivalent of your C++ code:

```python
def string_matching(s1, s2):
    # Begins with second string
    starts_with = s1.startswith(s2)
    print('Does {} start with {}? {}'.format(s1, s2, starts_with))
    
    # Contains at any location
    contains_anywhere = s1.find(s2) != -1
    if contains_anywhere:
        locations = [i for i in range(len(s1)) if s1.startswith(s2, i)]
        print('{} is found at locations {} in {}'.format(s2, locations, s1))
    else:
        print('Does {} contain {}? {}'.format(s1, s2, contains_anywhere))
    
    # Ends with second string
    ends_with = s1.endswith(s2)
    print('Does {} end with {}? {}\n'.format(s1, s2, ends_with))  

string_matching("abcdabab", "ab") 
```
This Python code does the following:
- The `startswith()` function checks if the first string starts with the second string and returns a boolean value.
- The `find()` function checks if the first string contains the second string at any location and returns the starting index of the match, or -1 if no match is found. If there are multiple occurrences of the second string in the first one, it uses list comprehension to find their locations.
- The `endswith()` function checks if the first string ends with the second string and returns a boolean value.
