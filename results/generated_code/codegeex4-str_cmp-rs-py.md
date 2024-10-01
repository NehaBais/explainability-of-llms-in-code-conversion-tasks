Below is the Python equivalent of your Rust code:

```python
def main():
    # only same types can be compared
    # String and String or str and str
    # exception: strict equality and inequality also work on str and String
    a = 'abc'
    b = 'Bac'.lower()

    # Strings are coerced to str when borrowed and needed
    if a == b:
        print("The strings are equal")
    if a != b:
        print("The strings are not equal")
    if a > b:
        print("The first string is lexically after the second")
    if a < b:
        print("The first string is lexically before the second")

    # case-insensitives:

    # equality
    # this avoids new allocations
    if a.lower() == b.lower():
        print("Both strings are equal when ignoring case")

if __name__ == "__main__":
    main()
```

Please note that unlike Rust, Python treats string comparisons lexicographically by default. Furthermore, Python does not have the concept of "strict" equality or inequality between two different types, which means you don't need to perform type checks when comparing variables.

Python also uses the `lower()` method for case insensitive comparisons. This function returns a copy of the string with all uppercase characters converted to lowercase. The original string is left unchanged.

Lastly, Python does not provide direct comparison of numeric strings if they are not treated lexically. However, you can always convert them into integers (or floats) before comparing:

a = '123'
b = '456'

if int(a) > int(b):
    print("The first string is numerically after the second")
