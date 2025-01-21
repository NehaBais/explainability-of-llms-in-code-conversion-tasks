 Sure, here is the equivalent Python code for the given JavaScript code:

```python
stringA = "tacoloco"
stringB = "co"
q1, q2, q2multi, m = False, -1, [], None
q2matches = []

# stringA starts with stringB
q1 = stringA[:len(stringB)] == stringB

# stringA contains stringB
q2 = stringA.find(stringB)

# multiple matches
q2multi = stringB if 'g' in stringB else stringB + '$'  # Adding $ to avoid overlapping matches
while True:
    m = re.search(stringB, stringA)
    if not m:
        break
    q2matches.append(m.start())

# stringA ends with stringB
q3 = stringA[-len(stringB):] == stringB

print("1: Does '{}' start with '{}'? {}".format(stringA, stringB, "Yes." if q1 else "No."))
if q2 != -1:
    print("2: Is '{}' contained in '{}'? Yes, at index {}.".format(stringB, stringA, q2))
else:
    print("2: Is '{}' contained in '{}'? No.".format(stringB, stringA))
if len(q2matches) > 1:
    print("   In fact, it happens {} times within '{}', at index{}s {}.".format(len(q2matches), stringA, "es" if len(q2matches) > 1 else "", ', '.join(map(str, q2matches))))
print("3: Does '{}' end with '{}'?   {}".format(stringA, stringB, "Yes." if q3 else "No."))
```

### Explanation:
1. **String Matching**: The logic for checking if `stringA` starts with `stringB`, contains `stringB`, and ends with `stringB` is directly translated from JavaScript to Python using similar methods (`substring` in JS corresponds to slicing in Python, and `indexOf` and `substr` in JS are replaced by `.find()` and string slicing in Python).
2. **Multiple Matches**: In Python, we use the `re` module to find all occurrences of `stringB` within `stringA`. The regular expression pattern is adjusted to handle multiple matches correctly.
3. **Output**: The output format is similar to JavaScript's `console.log`, using Python's formatted string literals (`f-strings`) for clarity and readability.

This code should work similarly to the provided JavaScript example, performing the three types of string matching as specified.
