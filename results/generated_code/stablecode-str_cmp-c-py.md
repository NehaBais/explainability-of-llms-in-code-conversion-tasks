The given code is written in C and needs to be converted to Python. The code demonstrates various string comparisons provided by the language, including case sensitive and case insensitive comparisons.

Here's the equivalent Python code:

```python
def compare(a, b):
    print(f"{a:<20} == {b:<20} : {bool(0==strcmp((A),(B))))")

def compare_case(a, b):
    print(f"{a:<20} ignoring case == {b:<20} ignoring case : {bool(0==strcasecmp((A),(B))))"})

# Example usage
a = "./c"
b = "./C"
compare(a, b)
compare_case(a, b)
```

The Python code above defines two functions `compare` and `compare_case`, which are used to compare strings for exact equality or inequality, respectively. The `print` statements within the code demonstrate how to format and print the results of the string comparisons.
