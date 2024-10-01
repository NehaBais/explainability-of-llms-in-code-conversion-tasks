Here's the Python code that performs string interpolation using the `replace()` method:
```
original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"
newString = original.replace(original.find(toBeReplaced), len(toBeReplaced), replacement)
print("String after replacement:", newString)
```
The `replace()` method takes three arguments: the index of the string to be replaced, the length of the string to be replaced, and the replacement string. In this case, we use `original.find(toBeReplaced)` to find the index of the first occurrence of `toBeReplaced` in `original`, `len(toBeReplaced)` to get the length of `toBeReplaced`, and `replacement` as the replacement string.

