The following is the Python equivalent of your Rust code:
```python
def main():
    A = "abc"
    b = "Bac"

    # Strings are coerced to &str when borrowed and needed
    if A == b: print("The strings are equal")
    if A != b: print("The strings are not equal")
    if A  > b: print("The first string is lexically after the second")
    if A  < b: print("The first string is lexically before the second")
    if A >= b: print("The first string is not lexically before the second")
    if A <= b: print("The first string is not lexically after the second")

    # case-insensitives:

    # equality
    if A.lower() == b.lower(): print("Both strings are equal when ignoring case")

if __name__=='__main__': main()
```
