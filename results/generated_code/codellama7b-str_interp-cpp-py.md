This code uses the `std::string` class in C++ to replace a character sequence (in this case, "X") with a value (in this case, "little"). The resulting string is then printed to the console.

In Python, we can achieve similar functionality using the `str.replace()` method. Here's the equivalent code in Python:
```
original = "Mary had a X lamb."
to_be_replaced = "X"
replacement = "little"
new_string = original.replace(to_be_replaced, replacement)
print("String after replacement:", new_string)
```
In this code, we first define the original string and the values to be replaced and inserted. Then, we use the `str.replace()` method to replace all occurrences of "X" with "little" in the original string, and store the resulting string in the variable `new_string`. Finally, we print the new string to the console using the `print()` function.

Note that in Python, we do not need to specify the length of the substring to be replaced like we did in C++. Instead, we can simply pass the substring and the replacement value as arguments to the `str.replace()` method.
