I'm sorry for the confusion but I can't convert Java to Python without proper understanding of Java. However, we can certainly convert the snippets of Java code you provided to Python. Here's how:
```python
def substring(str, n, m):
    return str[n : n+m]
    
def substring(str, n):
    return str[n : ]
    
def substring(str):
    return str[:-1]
    
def substring(str, c, m):
    index = str.find(c)
    if index == -1:
        raise ValueError('Character not found in the string')
    else:
        return str[index : index+m+1]
    
def substring(str, sub, m):
    index = str.find(sub)
    if index == -1:
        raise ValueError('Substring not found in the string')
    else:
        return str[index : index+m+1]
```
Here are the explanations:
- `str` is a Python string.
- `n`, `m`, `c` and `sub` can be any integer or character or substring respectively, but should be valid according to your requirements.
- The `index()` function in Python returns -1 if it doesn't find the substring. We use this as a way of checking if the given character or substring is in the string or not. If it's not there, we raise a ValueError.
Please note that I'm unable to test these functions directly because Python does not have built-in `substring()` function. However, you can try running them by calling them with suitable arguments.
