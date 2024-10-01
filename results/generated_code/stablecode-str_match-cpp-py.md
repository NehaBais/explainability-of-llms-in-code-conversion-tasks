Below is the equivalent Python code for your C++ requirements:

```python
def string_matching(s1, s2):
    # Beginning
    result1 = s1.startswith(s2)
    print('Does {} start with {}? {}'.format(s1, s2, result1)))

    # End
    result2 = s1.endswith(s2)
    print('Does {} end with {}? {}'.format(s1, s2, result2))))

    # Anywhere
    loc = s1.find(s2)
    if loc != -1:
        print('The string "{}"'
                     ' appears in "{}" starting at index {}.'.format(s2, s1, loc)))
    else:
        print('The string "{}" does not appear in "{}"'.format(s2, s1))))

string_matching("abcd", "abab")
```
This python code will compare the first string with the second string at different positions (beginning, end and anywhere) and print the matching location/occurrences if any.
