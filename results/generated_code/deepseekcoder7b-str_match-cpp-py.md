Here is the Python equivalent of your C++ code:

```python
# Define strings
s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Part 1: Determining if the first string starts with second string
result = s1.startswith(s3)
print(f'String 1 starts with String 3?: {result}')

# Part 2: Determining if the first string contains the second string at any location
loc = 0
while True:
    loc = s1.find(s2, loc)
    if loc == -1: break
    print(f'String 2 found at index {loc}')
    loc += 1
    
# Part 3: Determining if the first string ends with the second string
result = s1.endswith(s3)
print(f'String 1 ends with String 3?: {result}')
```

This Python code will print out whether each of the requirements are satisfied for `s1` and `s2` compared to `s3`, and also identify all occurrences of `s2` in `s1`. Note that string indexing starts at 0 as per standard python conventions unlike C++ where it is 1 based.

