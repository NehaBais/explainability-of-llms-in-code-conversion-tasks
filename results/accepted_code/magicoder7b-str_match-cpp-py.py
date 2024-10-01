def check_string_matches(s1, s2):
    # Part 1 - Check if string s1 starts with string s2
    print("Does '{}' start with '{}'? {}".format(s1, s2, s1.startswith(s2)))

    # Part 2 - Check for the first occurrence of string s2 in s1
    loc = s1.find(s2)
    print("Does '{}' contain '{}' at any location? {}".format(s1, s2, loc != -1))
    if loc != -1:
        print("First occurrence is at index", loc)

    # Part 3 - Check if string s1 ends with string s2
    print("Does '{}' end with '{}'? {}".format(s1, s2, s1.endswith(s2)))


check_string_matches("abcd", "ab")
