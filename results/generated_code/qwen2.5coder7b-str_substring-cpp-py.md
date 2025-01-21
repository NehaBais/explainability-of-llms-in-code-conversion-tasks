The Python version of the given C++ code would be as follows:

```python
s = "0123456789"

n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m])
print(s[n:])
print(s[:-1])
print(s[s.find(c):s.find(c)+m])
try:
    print(s[s.find(sub):s.find(sub)+m])
except ValueError:
    print('Substring not found')
```

This code does the following:

- `s[n:n+m]` gets the substring starting from index n and of length m.
- `s[n:]` gets the substring starting from index n up to the end of the string.
- `s[:-1]` is equivalent to getting the whole string minus the last character. In Python, negative indices count from the end of the string.
- `s.find(c)` gives the first occurrence index of the given character 'c' in the string `s`. If not found, it returns -1.
- `s[s.find(sub):]` tries to get the substring starting from the index of the given substring `sub`. But if the substring is not found, it raises a ValueError exception which we catch and print an error message.

Note: Python's `str.find()` method returns the lowest index in the string where the specified value is first found. If it's not found, it will return `-1`. So, you may want to check if your substring exists before trying to find it with `find()`, otherwise a ValueError exception could be raised.
