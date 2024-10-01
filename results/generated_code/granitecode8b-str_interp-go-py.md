Here's the Python code that performs string interpolation using the given values:
```
str = "Mary had a {} lamb"
txt = "little"
out = str.format(txt)
print(out)
```
In this code, we define a string variable `str` with a placeholder `{}` for the value that will be interpolated. We also define a variable `txt` with the value to be inserted into the string. The `format()` method is used to replace the placeholder in the string with the value of `txt`, resulting in the interpolated string `"Mary had a little lamb"`. Finally, we print the interpolated string to the console using the `print()` function.

