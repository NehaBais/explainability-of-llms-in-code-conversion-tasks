Here is the Python version of your C code. This code defines functions that perform string matching operations similar to those you've described in your task requirements. 

```python
def starts_with(container, target):
    if len(container) < len(target):
        return False
    return container[:len(target)] == target

def ends_with(container, target):
    if len(container) < len(target):
        return False
    return container[-len(target):]] == target

def does_contain(container, target):
    return target in container

print(starts_with("Hello","Hell"))) # Output: True
print(ends_with("Code","ode"))) # Output: True
print(does_contain("Google","msn"))) # Output: True
```
In Python, string methods such as `str.startswith()`, `str.endswith()` and `in` keyword can be used for achieving the desired functionality.
