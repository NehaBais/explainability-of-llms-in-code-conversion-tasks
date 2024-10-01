s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Beginning
print(s1.startswith(s3))

# End
print(s1.endswith(s3))

# Anywhere
print(s1.find(s2))

# Location of the match
loc = s2.find(s3)
print(loc)

# Handle multiple occurrences
loc = s2.find(s3)
while loc != -1:
    print(loc)
    loc = s2.find(s3, loc + 1)
