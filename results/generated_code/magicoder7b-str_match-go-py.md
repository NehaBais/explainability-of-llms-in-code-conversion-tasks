 Here is the equivalent Python code for your Golang program:

```python
def match(first, second):
    print("1. %s starts with %s: %s" % (first, second, first.startswith(second)))
    i = first.find(second)
    if i != -1:
        print("2. %s contains %s at location(s) %s:" % (first, second, [i+1]*len(second)))
        for start in range(i+1, len(first)):
            i = first[start:].find(second)
            if i == -1: break
            print("2.2. at location %d" % (start + i))
    else:
        print("2. %s contains %s: False" % (first, second))

    print("3. %s ends with %s: %s" % (first, second, first.endswith(second)))

match('abracadabra', 'abr')
```
This code does the same as your original Golang code, demonstrating three types of string matching and printing the location of a match for part 2 if it exists. It uses Python's built-in `str.startswith()`, `str.find()` and `str.endswith()` methods to achieve this. If the second string is not found in the first one, it will print "False" instead of its index.
