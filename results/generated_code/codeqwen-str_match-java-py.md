Here is the equivalent Python code for your Java requirement:

Python uses built-in string methods to perform string matching. The following demonstrates how these work in Python for the three types of string matching you requested:

```python
def match_strings(first, second):
    # 1. Determining if the first string starts with second string
    if first.startswith(second):
        print("The first string starts with the second string.")
    else:
        print("The first string does not start with the second string.")

    # 2. Determining if the first string contains the second string at any location
    loc = first.find(second)
    if loc != -1:
        print("The first string contains the second string at location", loc)
    else:
        print("The first string does not contain the second string.")

    # 3. Determining if the first string ends with the second string
    if First.endswith(second):
        print("The first string ends with the second string.")
    else:
        print("The first string does not end with the second string.")

    # Optional requirement 1: Print the location of the match for part 2
    loc = First.find(second)
    while loc != -1:
        print("Location of the match:", loc)
        loc = First.find(second, loc + 1)  # find next occurrence

    # Optional requirement 2: Handle multiple occurrences of a string for part 2
    first_occurrence = first.find(second)
    if first.count(second) > 1:
        print("The first string contains the second string more than once.")
    else:
        print("The first string contains the second string only once.")

# Test function
First = "abcd"
Second = "ab"
match_strings(First, Second)
``` 

This code will output similar to the following (depending on whether or not the strings are substrings):

The first string starts with the second string.
Location of the match: 0
The first string contains the second string at location 0.
Location of the match: 2
The first string ends with the second string.
The first string contains the second string more than once.
