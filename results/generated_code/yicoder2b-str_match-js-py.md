Sure, here is the equivalent code in Python:

```python
def match_strings(a, b):
    # Check if a starts with b
    q1 = a[:len(b)] == b

    # Check if a contains b
    q2  = a.find(b) != -1

    # Multiple matches
    q2multi = re.compile(b, re.IGNORECASE | re.DOTALL)
    m = q2multi.findall(a)
    if m:
        q2matches = [i for i in range(len(a)) if a[i:i + len(b)] in m]
    else:
        q2matches = []

    # Check if a ends with b
    q3 = a[-len(b):] == b

    return {
        "1": "Does '{}' start with '{}'? {}".format(a, b, "Yes." if q1 else "No."),
        "2": "Is '{}' contained in '{}'? {}".format(b, a, "Yes, at index {}.".format(q2) if q2 else "No."),
        "3": "Does '{}' end with '{}'? {}".format(a, b, "Yes." if q3 else "No."),
    }
```

This code uses the `re` module in Python which provides support for regular expressions. It also allows you to specify certain flags like `re.DOTALL` which makes '.' include newline characters and `re.IGNORECASE` which makes matching case insensitive.
