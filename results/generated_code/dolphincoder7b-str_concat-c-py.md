This is a Python translation of the given C code. Here are the corrections:
- In C, char *s1 and const char *s2 are both used to declare string variables, but in Python, we can use either str or bytes for string variable declarations. So I am assuming that you meant by s1 and s2 as strings.
- In Python, string concatenation is done using the + operator. So, instead of concatenating two strings with the strcat function, I'm simply adding the second string to the first string in the print statement.
```python
s = "hello"
print(f"{s} literal")  # or print(f"{s}{str(' literal')}")

# Now we create a new string variable 's2' that will hold the concatenation of s and " literal".
s2 = f"{s} literal"

# Finally, let's display the content of the concatenated string.
print(s2)  # or print(s + str(' literal'))
```
