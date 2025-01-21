Here is the equivalent Python code for your JavaScript requirements:

```python
# define the strings
stringA = 'tacoloco'
stringB = 'co'

# stringA starts with stringB
q1 = stringA.startswith(stringB)

# stringA contains stringB
q2  = stringA.find(stringB)

# multiple matches
q2multi = [m.start() for m in re.finditer(re.escape(stringB), stringA)]

# stringA ends with stringB
q3 = stringA.endswith(stringB)

print("1: Does '{}' start with '{}'? {}".format(stringA, stringB, "Yes." if q1 else "No."))
print("2: Is '{}' contained in '{}'? {}".format(stringB, stringA, "Yes, at index {}.".format(q2) if ~q2 else "No."))
if ~q2 and len(q2multi) > 1:
    print("   In fact, it happens {} times within '{}', at indices {}.".format(len(q2multi), stringA, ', '.join(map(str, q2multi))))
print("3: Does '{}' end with '{}'? {}".format(stringA, stringB, "Yes." if q3 else "No."))
```

Please note that the Python equivalent of `~q2` is `-1`, which means the substring is not found in the main string, similar to JavaScript's `-1`. For multiple occurrences, the `re.finditer()` method returns an iterator yielding match objects for all non-overlapping matches of pattern in string, as a list. The `start()` method of each match object provides the starting index of the match within the main string.
