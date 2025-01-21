In Python, the string concatenation can be done using `+` operator. The `sprintf` function is not available in Python as Python does not have a built-in equivalent for it. Here's how you can convert your C code to Python:

```python
def main():
    str = "Good Morning"
    
    # Append the string variable with another string literal in the most idiomatic way.
    str += " to all" + " !!!"
    
    print(str)

if __name__ == "__main__":
    main()
```

This Python code does exactly the same thing as your C code: it creates a string variable, appends two other strings to it, and prints the result.
