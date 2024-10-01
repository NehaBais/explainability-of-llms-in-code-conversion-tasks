s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Beginning
print(s1.startswith(s3))
# End
print(s1.endswith(s3))
# Anywhere
loc = s1.find(s2)
if loc != -1:
    print("Match found at location:", loc)
else:
    print("No match found")

loc = s2.find(s3)
print("Location of first occurrence of", s3, "in", s2, "is:", loc)
loc = s2.find(s3, loc + 1)
if loc != -1:
    print("Match found at location:", loc)
else:
    print("No more matches found")
