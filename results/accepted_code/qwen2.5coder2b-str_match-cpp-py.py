s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Beginning
if s1[: len(s3)] == s3:
    print("True")
else:
    print("False")

# End
if s1[-len(s3) :] == s3:
    print("True")
else:
    print("False")

# Anywhere
if s2.find(s3) != -1:
    print("True")
else:
    print("False")

# Additional optional requirement: find multiple occurrences
loc = 0
while loc != -1:
    loc = s2.find(s3, loc)
    if loc != -1:
        print(loc)
    else:
        break
