Here is your converted Python code:

```python
def print_match(possible_match):
  if possible_match is not None:
    print("Found match at pos {}".format(possible_match))
  else:
    print("Did not find any matches")

def main():
  s1 = "abcd"
  s2 = "abab"
  s3 = "ab"

  # Determining if the first string starts with second string
  assert s1.startswith(s3)
  # Determining if the first string contains the second string at any location
  assert s1.find(s3) != -1
  # Print the location of the match
  print_match(s1.find(s3)) # Found match at pos 0
  print_match(s1.find(s2)) # Did not find any matches
  # Determining if the first string ends with the second string
  assert s2.endswith(s3)

main()
```
