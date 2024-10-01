Here is the equivalent Python code for your C++ code:

```python
def string_matching():
    s1="abcd"
    s2="abab"
    s3="ab"

    #Beginning
    start = s1.find(s3) #returns 0 if found, -1 otherwise
    if start != -1:
        print("The first string starts with the second string at position", start)

    #End
    end = s1[::-1].find(s3[::-1])
    if end != -1:
        print("The first string ends with the second string at position", len(s1)-end-len(s3))

    #Anywhere
    locations = [m.start() for m in re.finditer('(?={0})'.format(re.escape(s2)), s1)]
    for loc in locations:
        print("The first string contains the second string at position", loc)

string_matching()
```

In Python, we use `start()` and `end()` methods on a match object from `re.finditer()` to get their starting and ending positions respectively. The format of `(?={0})` is used for regex lookahead which checks if the pattern exists somewhere in the string without consuming any characters (i.e., it doesn't move your 'cursor').

Please note that Python uses 0-based indexing, as C++ does. This means that the first character of a string has an index of 0, and the second character has an index of 1, etc. Also, strings are immutable in python which means you can't change them after they're created. So we have to convert `s2` and `s3` to their reverse form for the end matching.
