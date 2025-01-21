Here is a Python version of the code:

```python
def match_string():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Beginning
    if s1.startswith(s3):
        print("s1 starts with s3")

    # End
    if s1.endswith(s3):
        print("s1 ends with s3")

    # Anywhere
    if s2 in s1:
        loc = s2.find(s3)
        while loc != -1:
            print(f"Match found at position {loc}")
            loc = s2.find(s3, loc + 1)

match_string()
```

In Python, string comparison methods like `startswith()`, `endswith()` and the `in` operator are used for checking if a substring exists in another string. The method `find()` is used to find the position of the first occurrence of the substring and returns -1 if the substring does not exist.

This script will output "s1 starts with s3" and "s1 ends with s3" because s3 is present at the beginning and end of s1, respectively. It will also print all positions where s2 contains s3.
