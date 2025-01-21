Sure, here is the Python equivalent of your C++ code with the given requirements:

```python
s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Beginning
if s1[:len(s3)] == s3:
    print("True")
else:
    print("False")

# End
if s1[-len(s3):] == s3:
    print("True")
else:
    print("False")

# Anywhere
if s2.find(s3) != -1:
    print("True")
else:
    print("False")

# Additional optional requirement: find multiple occurrences
loc = 0
while loc != -1:
    loc = s2.find(s3, loc)
    if loc != -1:
        print(loc)
    else:
        break
```

In the Python code:
- `s1[:len(s3)]` creates a substring from start to end of length `s3`.
- `s1[-len(s3):]` creates a substring from end to start of length `s3`.
- `s2.find(s3)` returns the first occurrence of `s3` in `s2`, or `-1` if it is not found.
- The `while` loop finds all occurrences of `s3` in `s2` and prints their positions.
