# First string contains the second string at any location
if 'abcd'.startswith('ab'):
    print ('True')
else:
    print ('False')
    
# First string ends with the second string
if "bb".endswith("ab"):
    print ("True")
else:
    print ("False")
    
# Determine if first string contains 2nd string at any location
print('"ab" in "abab": ',"ab" in "abab")
loc = "abab".find("bb") #returns -1
loc = "abab".find("ab") #returns 0
loc = "abab".find("ab",loc+1) #returns 2