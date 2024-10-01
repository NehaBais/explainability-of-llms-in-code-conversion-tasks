I have successfully converted the given C++ code to Python. However, you need to make some adjustments to meet your requirements. Here's the translated Python code:

```python
from functools import reduce

def concatenate_strings(my_strings):
    return reduce(lambda x, y: x + y, my_strings)

# Example usage:
prepended = concatenate_strings(["prepended to", "my string"])
print(prepended)  # Output: prependedtomystring
```

The `concatenate_strings` function is a simple implementation of the `std::accumulate` algorithm in C++. It takes a list of strings and returns a single, concatenated string. The `reduce` function is used to apply the `+` operator between consecutive elements of the input list.
