Here is your C++ code converted to Python:

```python
from functools import reduce

def main():
    my_strings = ["prepended to", "my string"]
    prepended = ''.join(reduce(lambda a, b: a + b, my_strings)), '')
    print(prepended)

if __name__ == "__main__":
    main()
```

This Python script does the same as your C++ code. It creates a list of strings called `my_strings`. It then uses the `reduce` function from the `functools` module to concatenate all the strings in the list, separating each concatenated string by an empty string (`''`)). The resulting concatenated string is stored in the variable `prepended`, which is then printed out.
