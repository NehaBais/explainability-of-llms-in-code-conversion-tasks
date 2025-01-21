def string_matching(str1, str2):
    # determine if str1 starts with str2
    print(f"'{str1}' starts with '{str2}': {str1.startswith(str2)}")

    # determine if str1 contains str2 at any location
    if str1.count(str2) > 0:
        print(f"'{str1}' contains '{str2}': True. Location(s): ", end="")
        i = -1
        while True:
            try:
                i = str1.index(str2, i + 1)
                print(i, end=" ")
            except ValueError:
                break
    else:
        print(f"'{str1}' contains '{str2}': False")

    # determine if str1 ends with str2
    print(f"'{str1}' ends with '{str2}': {str1.endswith(str2)}")


string_matching("abcd", "ab")  # should output: True, 0, 2
string_matching("abcd", "zn")  # should output: False
string_matching("abab", "bb")  # should output: False
string_matching("abab", "ab")  # should output: True, 0, 2
