 Here's the equivalent Python code for the provided Go code:

```python
def match(first, second):
    print(f"1. '{first}' starts with '{second}': {first.startswith(second)}")
    
    index = first.find(second)
    contains_match = index != -1
    print(f"2. '{first}' contains '{second}': {contains_match}")
    
    if contains_match:
        print(f"2.1. at location {index}")
        start = index + 1
        while True:
            index = first.find(second, start)
            if index == -1:
                break
            print(f"2.2. at location {index}")
            start = index + 1
    
    print(f"3. '{first}' ends with '{second}': {first.endswith(second)}")

match("abracadabra", "abr")
```

This Python code performs the same string matching operations as the Go code:

1. Determines if the first string starts with the second string.
2. Determines if the first string contains the second string at any location, and prints the location of the match (if found). It also handles multiple occurrences by continuing to search from the next character after each match.
3. Determines if the first string ends with the second string.
