Here is the equivalent Python code for your C program:

```python
def startsWith(container, target):
    return container.startswith(target)

def endsWith(container, target):
    return container.endswith(target)

# Handles multiple occurrences and prints their locations
def doesContain(container, target):
    pos = 0
    while pos < len(container):
        pos = container.find(target, pos)
        if pos == -1:
            break
        print("Location of match:", pos)
        # To find the next occurrence, start searching from the next position
        pos += 1
    return True if pos != -1 else False   

print("Starts with Test ( Hello,Hell ) : ", startsWith("Hello","Hell"))
print("Ends with Test ( Code,ode ) : ", endsWith("Code","ode"))
print("Contains Test ( Google,msn ) : ", doesContain("Google","msn"))
```
This Python code uses the built-in `startswith()` and `endswith()` functions for checking if a string starts or ends with another. For checking if a string contains another, it uses the `find()` function in a loop that continues until no more occurrences are found. The location of each occurrence is printed out.

Please note that this code assumes you want to handle multiple occurrences and print their locations. If you only need to know whether a match occurs or not without printing locations, simply replace the doesContain() function with `def doesContain(container, target): return target in container`.
