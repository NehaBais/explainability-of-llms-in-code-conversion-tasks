def contains(string, substring):
    return substring in string


def starts_with(string, substring):
    return string.startswith(substring)


def ends_with(string, substring):
    return string.endswith(substring)


s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
print(starts_with(s1, s3))  # True
# Determining if the first string contains the second string at any location
print(contains(s1, s3))  # False
# Print the location of the match
match_pos = s1.find(s3)
if match_pos is not None:
    print(f"Found match at pos {match_pos}")
else:
    print("Did not find any matches")
# Determining if the first string ends with the second string
print(ends_with(s2, s3))  # True
