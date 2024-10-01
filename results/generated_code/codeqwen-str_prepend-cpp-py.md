The equivalent code in Python would be:

```python
MyStrings = ["prepended to" , "my string"]
prepended = "".join(MyStrings)
print(prepended)
```

In the given C++ code, a vector of strings `MyStrings` is created with two elements. The `std::accumulate` function is then used to concatenate all these string elements into one single string. This concatenated string is stored in the variable `prepended`. Finally, this `prepended` string is printed out.

In Python, a list of strings is created with two elements. The `join()` method is then called on an empty string and passed the list of strings as its argument. It returns a new string that is a concatenation of all the strings in the list. This concatenated string is stored in the variable `prepended`. Finally, this `prepended` string is printed out.
