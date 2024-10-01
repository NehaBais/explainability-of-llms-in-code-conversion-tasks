 Here is the equivalent Python code for your C++ requirements:

```python
def check_string_matches(s1, s2):
    #Part 1 - Check if string s1 starts with string s2
    print("Does '{}' start with '{}'? {}".format(s1, s2, s1.startswith(s2)))
    
    #Part 2 - Check for the first occurrence of string s2 in s1
    loc = s1.find(s2)
    print("Does '{}' contain '{}' at any location? {}".format(s1, s2, loc != -1))
    if loc != -1:
        print("First occurrence is at index", loc)
    
    #Part 3 - Check if string s1 ends with string s2
    print("Does '{}' end with '{}'? {}".format(s1, s2, s1.endswith(s2)))

check_string_matches('abcd', 'ab')
```
Please note that in Python, if a substring is not found in the string using `find()`, it returns -1, instead of returning `std::string::npos` like C++. This is why we check for `!= -1` to see if the sub-string was found at all. If you would prefer it to return `False` instead, you can modify the function as follows:

def check_string_matches(s1, s2):
    #Part 1 - Check if string s1 starts with string s2
    print("Does '{}' start with '{}'? {}".format(s1, s2, s1.startswith(s2)))
    
    #Part 2 - Check for the first occurrence of string s2 in s1
    loc = s1.find(s2)
    print("Does '{}' contain '{}' at any location? {}".format(s1, s2, loc != -1))
    if loc != -1:
        print("First occurrence is at index", loc)
    
    #Part 3 - Check if string s1 ends with string s2
    print("Does '{}' end with '{}'? {}".format(s1, s2, s1.endswith(s2)))

check_string_matches('abcd', 'ab')
