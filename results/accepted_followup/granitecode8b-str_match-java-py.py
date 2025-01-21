s1 = "abcd"
s2 = "ab"
# Determine if s1 starts with s2
print(s1.startswith(s2)) # returns True
# Determine if s1 contains s2 at any location
print(s1.find(s2) != -1) # returns False
# Determine if s1 ends with s2
print(s1.endswith(s2)) # returns False
# Print the location of the match for part 2
loc = s1.find(s2)
print("Location of match:", loc) # prints "Location of match: 0"
# Handle multiple occurrences of a string for part 2
for i in range(len(s1)):
 if s1[i:i+len(s2)] == s2:
 print("Multiple match found at location:", i) # prints "Multiple match found at location: 0" and then "Multiple match found at location: 2"