Sure, here is the equivalent Python code for your C program:

```python
def string_interpolation(original_str, replacement):
    modified_str = original_str % replacement
    print(modified_str)

extra = "little"
string_interpolation("Mary had a %s lamb.", extra)
```
In the above Python code, `%s` is used to replace placeholders in the string with actual values. The `%` operator can be called on strings, which allows you to insert variables directly into them. You just need to put the variable inside `%`.

When you run this program, it will print:

Mary had a little lamb.
