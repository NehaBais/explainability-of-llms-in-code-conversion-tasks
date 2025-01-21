Here is the equivalent Python code for your C code:

```python
cstr = "Changed "
str_var = "my String"
new_str_var = cstr + str_var
print(new_str_var)
```

In this Python code, we declare a string `str_var` and set its value to `"my String"`. Then, we create another string `cstr` and set it to `"Changed "`. We concatenate these two strings with the `+` operator, which is used for string concatenation in Python. The resulting string is stored in `new_str_var`, and then printed out.

Note that there's no need to allocate memory or free memory in Python like you would in C when dealing with strings because Python handles memory management automatically.
