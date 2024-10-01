# Given two strings, demonstrate the following three types of string matching:
# 1. Determining if the first string starts with second string
# 2. Determining if the first string contains the second string at any location
# 3. Determining if the first string ends with the second string

s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Beginning
if s1.startswith(s3):
    print("s1 starts with s3")
else:
    print("s1 does not start with s3")

# End
if s1.endswith(s3):
    print("s1 ends with s3")
else:
    print("s1 does not end with s3")

# Anywhere
loc = 0

while loc != -1:  # While there is a match...
    loc = s1.find(s2, loc)

    if loc == -1:  # No more matches, so quit.
        break

    print(f"s2 found at location {loc}")
    loc += len(s2)  # Update the index to find next occurrence.

# Optional requirements:
# Print the location of the match for part 2
# Handle multiple occurrences of a string for part 2.
