Here is the Python equivalent of your Java code:

```python
# Str class definition
class Str():

    def __init__(self):
        """Initialize string variable s with value "hello"."""
        self.s = "hello"

    def concatenate_strings(self):
        """Create another string variable whose value is the original variable (s) concatenated with another string literal."""
        self.s2 = self.s + " literal"
        print(self.s2)


# Create an instance of Str class
str_obj = Str()

# Call method to concatenate strings and print the content of s2 variable
str_obj.concatenate_strings()
```
This Python code does the same as your Java code - it creates a string variable `s` with value "hello"; then it concatenates this `s` variable (with the original value) with another string literal, forming a new string variable `s2`. The content of `s2` is printed out.
