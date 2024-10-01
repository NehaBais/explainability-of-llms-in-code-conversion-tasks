 Here is the equivalent Python code for the given C code:
```python
import string

def startsWith(container, target):
    if len(target) > len(container):
        return False
    return container.startswith(target)

def endsWith(container, target):
    if len(target) > len(container):
        return False
    return container.endswith(target)

def doesContain(container, target):
    return target in container

if __name__ == "__main__":
    print("Starts with Test ( Hello,Hell ) :", startsWith("Hello","Hell"))
    print("Ends with Test ( Code,ode ) :", endsWith("Code","ode"))
    print("Contains Test ( Google,msn ) :", doesContain("Google","msn"))
```
Note that the `strlen` function in C has been replaced by the `len` function in Python for calculating the length of a string. Also, the `strncmp` function in C has been replaced by the `startswith`, `endswith`, and `in` operators in Python for performing string matching. The `printf` function in C has been replaced by the `print` function in Python for printing output to the console.
