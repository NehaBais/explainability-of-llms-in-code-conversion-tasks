```python
# 1. Determining if the first string starts with the second string
str1 = "abcd"
str2 = "ab"
result = str1.startswith(str2)
print(f"Starts with: {result}")

# 2. Determining if the first string contains the second string at any location
str1 = "abab"
str2 = "bb"
result = str1.find(str2)
print(f"Contains at location: {result}")

# 3. Determining if the first string ends with the second string
str1 = "abcd"
str2 = "zn"
result = str1.endswith(str2)
print(f"Ends with: {result}")

# 4. Print the location of the match for part 2
str1 = "abab"
str2 = "ab"
result = str1.find(str2)
print(f"Location of match: {result}")

# 5. Handle multiple occurrences of a string for part 2
str1 = "ababab"
str2 = "ab"
results = [i for i in range(len(str1)) if str1.startswith(str2, i)]
print(f"Multiple occurrences: {results}")
```


