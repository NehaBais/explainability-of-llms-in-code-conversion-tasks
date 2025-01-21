Sure, here is the equivalent Python code:

```python
# Import the necessary library
from typing import List

def prepend_strings(strings: List[str], prefix: str) -> str:
    """
    This function takes a list of strings and a prefix string,
    then returns a new string with each element from the list prepended by the prefix.
    
    :param strings: List of strings to be prepended
    :param prefix: The prefix string to prepend to each element
    :return: A new string with each element from the list prepended by the prefix
    """
    return ' '.join([prefix + s for s in strings])

# Main function
def main():
    my_strings = ["prepended to", "my string"]
    prepended = prepend_strings(my_strings, "Hello ")
    print(prepended)

if __name__ == "__main__":
    main()
```

In the Python code, `prepend_strings` is a function that takes two arguments: `strings`, which is a list of strings, and `prefix`, which is the string to be prepended. It uses a list comprehension to create a new list where each element from `strings` is prepended by `prefix`, then joins them back into a single string using `' '.join()`. The `main` function demonstrates how to use this function with the provided example.
