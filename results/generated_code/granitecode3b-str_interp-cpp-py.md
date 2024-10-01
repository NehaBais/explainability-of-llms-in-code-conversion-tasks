Here's the Python code that performs the same task as the C++ code:
```
original = "Mary had a X lamb."
toBeReplaced = "X"
replacement = "little"
newString = original.replace(original.find(toBeReplaced), len(toBeReplaced), replacement)
print("String after replacement:", newString)
``` 
This code creates three variables: `original`, `toBeReplaced`, and `replacement`. The `original` variable contains the original string "Mary had a X lamb.", the `toBeReplaced` variable contains the character sequence "X", and the `replacement` variable contains the value "little". 
The `newString` variable is created by calling the `replace()` method on the `original` string. The `find()` method is used to find the index of the first occurrence of the `toBeReplaced` character in the `original` string, and the `len()` function is used to get the length of the `toBeReplaced` character sequence. The `replacement` value is then inserted into the `original` string at the specified index.
Finally, the `newString` variable is printed out using the `print()` function. When you run this code, you should see the following output:

String after replacement: Mary had a little lamb. 


