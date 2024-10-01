In Python, strings can be compared using comparison operators like `==`, `!=`, `<`, `>`, `<=`, and `>=`. The `sorted()` function can also be used for lexical sorting of strings. Here is how you can do it:

```python
def main():
    # Python string comparison operators:
    c = "cat"
    d = "dog"
    if c == d:
        print(f'{c} is bytewise identical to {d}')
    else:
        print(f'{c} is bytewise different from {d}')

    if c > d:
        print(f'{c} is lexically bytewise greater than {d}')
    elif c < d:
        print(f'{c} is lexically bytewise less than {d}')
    else:
        print(f'{c} is lexically bytewise equal to {d}')

    # Case insensitive comparison can be done using the lower() method:
    if c.lower() == d.lower():
        print(f'{c} and {d} are case-insensitively identical')
    else:
        print(f'{c} and {d} are not case-insensitively identical')

    # The built-in sorted function can be used for lexical sorting of strings:
    print(sorted([c, d]))

main()
```

In this code, `==` checks if two strings are equal bytewise (i.e., they have the same value in memory), while `<`, `>`, `<=` and `>=` check for lexical order. The `lower()` method is used to convert all characters of a string to lower case, which allows for case-insensitive comparisons. The `sorted()` function returns a new sorted list from the given iterable.
