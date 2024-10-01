# Beginning
print(s1.startswith(s3))  # Returns True if s1 starts with s3
# and False otherwise

# End
print(s1.endswith(s3))  # Returns True if s1 ends with s3
# and False otherwise

# Anywhere
loc = s2.find(s3)  # Returns the index of the first occurrence of s3 in s2
# or string::npos if not found
if loc != -1:
    print("Found at location", loc)
else:
    print("Not found")
