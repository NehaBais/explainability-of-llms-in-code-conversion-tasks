 Here's the equivalent Python code for the given C code. In Python, string concatenation is done using the `+` operator or by using f-strings (formatted strings) which are more readable and idiomatic.

```python
def main():
    str = "Good Morning"
    cstr = " to all"
    cstr2 = " !!!"
    
    # Check if the allocated space is sufficient
    if len(str) + len(cstr) + len(cstr2) < 24:
        # Append the strings using the most idiomatic way in Python
        str += cstr
        
        # Alternatively, you can use f-string for concatenation
        str = f"{str}{cstr2}"
        
        print(str)

if __name__ == "__main__":
    main()
```

This Python code performs the same operations as the C code: it checks if the allocated space is sufficient, appends strings to a variable, and prints the final content of the variable.
