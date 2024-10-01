## Solution
The following Python code implements the same functionality as the C program:

```python
def startsWith(container, target):
    clen = len(container)
    tlen = len(target)
    if clen < tlen:
        return False
    return container[:tlen] == target

def endsWith(container, target):
    clen = len(container)
    tlen = len(target)
    if clen < tlen:
        return False
    return container[-tlen:] == target

def doesContain(container, target):
    return target in container

print("Starts with Test ( Hello,Hell ) :", startsWith("Hello","Hell"))
print("Ends with Test ( Code,ode ) :", endsWith("Code","ode"))
print("Contains Test ( Google,msn ) :", doesContain("Google","msn"))
```

The `endsWith` function has a bug in the original C code that is not present in the Python code. In the C version of `endsWith`, the comparison made by `strncmp(container + clen - tlen, target, tlen)` will fail if `clen` is less than `tlen`. This can happen when `clen < 0`, which means that an overflow would occur in the addition. The Python code does not have this issue because it uses negative indexing to access the last characters of the string.
