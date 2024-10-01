Here's the Python code that achieves the same result as the JavaScript code you provided:
```
original = "Mary had a X lamb"
little = "little"
replaced = original.replace("X", little) #this changes the original string
print(replaced) # outputs "Mary had a little lamb"
```
In Python, the `replace()` method is used to replace all occurrences of a specified substring with another substring. The first argument is the substring to be replaced, and the second argument is the replacement substring. In this case, we're replacing "X" with "little". Note that the original string is not changed when you use the `replace()` method - it returns a new string with the replacements made.

