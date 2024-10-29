Here is the Python equivalent of your C code. It uses Python's built-in string methods to achieve what you want.

```python
def starts_with(container, target):
    return container.startswith(target)

def ends_with(container, target):
    return container.endswith(target)

def does_contain(container, target):
    return target in container

print("Starts with Test  ( 'Hello', 'Hell' ) : ", starts_with('Hello','Hell'))
print("Ends with Test  ( 'Code', 'ode' ) : ", ends_with('Code','ode'))
print("Contains Test  ( 'Google', 'msn' ) : ", does_contain('Google','msn'))
```

Python string methods like `startswith`, `endswith`, and keyword `in` can perform the respective functions just like your C code did using built-in string methods. The above Python script prints whether each of these three conditions is satisfied for strings 'Hello', 'Code' and 'Google'. Note that in Python index starts from 0 instead of 1 as it does in other programming languages, so the location printed will be one less than what you would expect if counting starting from 1.

