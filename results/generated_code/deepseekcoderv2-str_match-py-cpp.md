## Solution
### Code:
```python
def match_string(s, t):
    if len(t) > len(s):
        return False
    for i in range(len(s)-len(t)+1):
        if s[i] == t[0]:
            j = 1
            while j < len(t) and s[i+j] == t[j]:
                j += 1
            if j == len(t):
                return True
    return False
```
### Example:
```python
match_string("abcd", "ab") #returns True
match_string("abcd", "cd") #returns True
match_string("abcd", "zn") #returns False
match_string("abab", "bb") #returns False
match_string("abab", "ab") #returns True
loc = "abab".find("bb") #returns -1
loc = "abab".find("ab") #returns 0
loc = "abab".find("ab",loc+1) #returns 2
```
