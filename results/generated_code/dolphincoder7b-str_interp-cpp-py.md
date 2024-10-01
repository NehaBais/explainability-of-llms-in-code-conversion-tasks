The equivalent Python code for the given C++ code is as follows:
```python
original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"
newString = original.replace(original.find(toBeReplaced), len(toBeReplaced), replacement)
print("String after replacement:", newString)
```
Here's how the code works:
1. The given string "Mary had a X lamb." is stored in the variable `original`.
2. We have another string "X" and another string "little".
3. We find the index of the first occurrence of the substring "X" in the original string using `original.find(toBeReplaced)`.
4. The length of this substring "X" is stored in a variable called `len(toBeReplaced)` (which is 1).
5. Finally, we replace this substring with our desired replacement value by using the method `replace()`. 
6. The resultant string is stored in the variable `newString`.
7. We then print the modified string using the statement `print("String after replacement:", newString)`.
Note: The find() function returns -1 if the string "X" does not exist in the original string. If you want to replace all occurrences of a substring, you need to use the while loop and use find() with a starting index to search for substrings that match your condition.
