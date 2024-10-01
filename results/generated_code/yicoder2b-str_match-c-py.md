Sure, here is the equivalent code in Python:

```python
def startsWith(container, target):
    tlen = len(target)
    if len(container) < tlen:
        return 0
    else:
        return container[:tlen] == target

def endsWith(container, target):
    tlen = len(target)
    if len(container) < tlen:
        return 0
    else:
        return container[-tlen:] == target

def doesContain(container, target):
    return target in container

print(startsWith("Hello", "Hell")) # Output: True
print(endsWith("Code", "ode")) # Output: True
print(doesContain("Google", "msn")) # Output: False
```
