def find_match(text, substring):
    match text.find(substring):
        -1: print("Did not find any matches")
        else: print(f"Found match at pos {match}")

s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
print(s1.startswith(s3))  # True

# Determining if the first string contains the second string at any location
print(s1.find(s3))  # 0
find_match(s1, s2)  # Did not find any matches

# Determining if the first string ends with the second string
print(s2.endswith(s3))  # True