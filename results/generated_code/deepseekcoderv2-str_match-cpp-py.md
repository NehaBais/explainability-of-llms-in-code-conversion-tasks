 Sure! Here's the equivalent Python code for the given C++ code:

```python
# Part 1: Determine if the first string starts with the second string
def starts_with(s1, s2):
    return s1.startswith(s2)

# Part 2: Determine if the first string contains the second string at any location
# Optional requirement: Print the location of the match for part 2
def find_all_occurrences(s1, s2):
    locations = []
    start = 0
    while True:
        index = s1.find(s2, start)
        if index == -1:
            break
        locations.append(index)
        start = index + 1
    return locations

# Part 3: Determine if the first string ends with the second string
def ends_with(s1, s2):
    return s1.endswith(s2)

# Example usage
s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Part 1: Determine if the first string starts with the second string
result_starts_with = starts_with(s1, s3)
print("Starts with:", result_starts_with)

# Part 2: Determine if the first string contains the second string at any location
locations = find_all_occurrences(s1, s3)
print("Locations of occurrences:", locations)

# Part 3: Determine if the first string ends with the second string
result_ends_with = ends_with(s1, s3)
print("Ends with:", result_ends_with)
```

This Python code performs the same tasks as the provided C++ code. It includes functions to check if one string starts with another (`starts_with`), finds all occurrences of a substring within a string (`find_all_occurrences`), and checks if a string ends with another string (`ends_with`). The `find_all_occurrences` function also handles multiple occurrences by iterating through the string starting from each found location.
