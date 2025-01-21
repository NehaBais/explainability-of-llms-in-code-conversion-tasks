The error is due to an unmatched parenthesis in the print statement. 

To fix this, we need to ensure that every opening bracket has a corresponding closing bracket. In this case, we have a missing closing parenthesis at the end of the print statement.

Here's the corrected code:
```python
def string_matching(s1, s2):
    # Beginning
    result1 = s1.startswith(s2)
    print('Does {} start with {}? {}'.format(s1, s2, result1))))

    # Anywhere
    loc = s1.find(s2)
    if loc != -1:
        print('The string "{}" appears in "{}" starting at index {}.'.format(s2, s1, loc)))
    else:
        print('The string "{}" does not appear in "{}"'.format(s2, s1))))

string_matching("abcd", "abab")
```
