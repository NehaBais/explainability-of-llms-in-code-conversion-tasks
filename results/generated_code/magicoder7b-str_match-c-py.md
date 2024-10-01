 Here is the equivalent Python code for your C program:

```python
def starts_with(container, target):
    return container.startswith(target)

def ends_with(container, target):
    return container.endswith(target)

def does_contain(container, target):
    if target in container:
        print("Match found at index", container.index(target))  # Print the location of the match
        return True
    else:
        return False
        
print("Starts with Test ( Hello,Hell ) : ", starts_with("Hello","Hell"))
print("Ends with Test ( Code,ode ) : ", ends_with("Code","ode"))
does_contain("Google","msn")  # It prints the location of the match if it exists
```

In this Python code, built-in functions `startswith()` and `endswith()` are used to determine if a string starts or ends with another string. The function `index()` is used in `does_contain()` to find the first occurrence of a substring and print its starting index if it exists.

Please note that Python's built-in functions `startswith()`, `endswith()` and `index()` are case sensitive, so "Hello" and "hello" would be considered as different strings. If you want them to be the same string, convert both inputs to the same case (either lower or upper) before using these functions.
