The equivalent code in Python is:

```python
adjective = "little"
lyric = "Mary had a {} lamb".format(adjective)
print(lyric)  # Outputs: Mary had a little lamb
``` 
This code does essentially the same thing as your Java code, but in Python it's more explicit to use String formatting with {} instead of using built-in variable interpolation like JavaScript does with `.replace('X', 'big')`.
