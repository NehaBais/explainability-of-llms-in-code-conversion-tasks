s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Beginning
print(s1.startswith(s3))
# End
print(s1.endswith(s3))
# Anywhere
print(s2.find(s3) != -1)
if s2.find(s3) != -1:
 print("Location of match:", s2.find(s3))
 loc = s2.find(s3)
 while s2.find(s3, loc + 1) != -1:
 print("Location of next match:", s2.find(s3, loc + 1))
 loc += 1