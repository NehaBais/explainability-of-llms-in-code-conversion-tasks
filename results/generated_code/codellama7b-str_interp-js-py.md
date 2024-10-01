This code will replace all occurrences of "X" in a given string with the value of another variable or constant. In this case, it replaces all occurrences of "X" in the string "Mary had a X lamb" with the value "little".

In Python, you can use the `replace()` method to perform string interpolation. The syntax is as follows:
```python
original = "Mary had a X lamb"
little = "little"
replaced = original.replace("X", little)
print(replaced) # Output: Mary had a little lamb
```
Note that the `replace()` method returns a new string with the replaced values, and does not change the original string. If you want to modify the original string in-place, you can use the `replace()` method on the string directly:

original = original.replace("X", little)
print(original) # Output: Mary had a little lamb
