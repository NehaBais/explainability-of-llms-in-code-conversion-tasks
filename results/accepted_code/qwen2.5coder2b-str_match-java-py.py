def string_matching(str1, str2):
    # Check if first string starts with second string
    start_match = str1.startswith(str2)
    print("Starts With:", start_match)

    # Check if first string contains the second string at any location
    contains_match = str2 in str1
    print("Contains:", contains_match)

    # Check if first string ends with the second string
    end_match = str1.endswith(str2)
    print("Ends With:", end_match)

    # Optional part: Find the location of the match for part 2
    loc = str1.find(str2)
    while loc != -1:
        print(f"Match found at index {loc}")
        loc = str1.find(str2, loc + 1)


string_matching("abcd", "ab")
string_matching("abcd", "zn")
string_matching("abab", "bb")
string_matching("abab", "ab")
