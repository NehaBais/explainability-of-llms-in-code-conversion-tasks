Here is your Rust code converted to Python:

```python
def print_match(possible_match):
    if possible_match:
        print(f'Found match at pos {possible_match}')
    else:
        print('Did not find any matches')

def main():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Determining if the first string starts with second string
    assert s1.startswith(s3)
    
    # Determining if the first string contains the second string at any location
    assert s1.find(s3) != -1

    # Print the location of the match 
    print_match(s1.find(s3))  # Found match at pos 0
    print_match(s1.find(s2))  # Did not find any matches
    
    # Determining if the first string ends with the second string
    assert s2.endswith(s3)

main()
```
In Python, there's no `assert!` equivalent like in Rust, so we use `assert`. The `find()` function is used to find the location of the match (if any) and it returns `-1` if nothing is found. If we want to handle multiple occurrences of a string for part 2, you can use a loop with slicing until no more matches are found.
