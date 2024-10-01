def print_match(possible_match)
    : if possible_match is None : print("Did not find any matches") else
    : print("Found match at pos", possible_match)

          def main()
    : s1 = "abcd" s2 = "abab" s3 = "ab"

#Determining if the first string starts with second string
      assert(s1.startswith(s3))
#Determining if the first string contains the second string at any location
          assert(s1.__contains__(s3))
#Print the location of the match
              print_match(s1.find(s3)) #Found match at pos
      0 print_match(s1.find(s2)) #Did not find any matches
#Determining if the first string ends with the second string
      assert(s2.endswith(s3))