Here is the Python equivalent of your C code. The main part of your program checks if a string starts with a given substring, ends with a given substring or contains that substring. If it finds such a match, it prints out the location (if applicable) and also handles multiple occurrences.

```python
def starts_with(container, target):
    return container.startswith(target)

def ends_with(container, target):
    return container.endswith(target)

def does_contain(container, target):
    return target in container

def main():
    print("Starts with Test: ", starts_with("Hello", "Hell"))
    print("Ends with Test: ", ends_with("Code", "ode"))
    print("Contains Test: ", does_contain("Google", "msn"))

if __name__ == "__main__":
    main()
```

The `startswith` function checks if a string starts with a given substring. The `endswith` function checks if a string ends with a given substring. The `contains` function checks if the first string contains the second one.

In Python, you can use built-in functions to check for starts and ends of strings as well as whether a string contains another. This makes the code concise and easy to understand.
