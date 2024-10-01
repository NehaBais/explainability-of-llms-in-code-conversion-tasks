def string_matching(s1, s2):
    # Begins with second string
    starts_with = s1.startswith(s2)
    print("Does {} start with {}? {}".format(s1, s2, starts_with))

    # Contains at any location
    contains_anywhere = s1.find(s2) != -1
    if contains_anywhere:
        locations = [i for i in range(len(s1)) if s1.startswith(s2, i)]
        print("{} is found at locations {} in {}".format(s2, locations, s1))
    else:
        print("Does {} contain {}? {}".format(s1, s2, contains_anywhere))

    # Ends with second string
    ends_with = s1.endswith(s2)
    print("Does {} end with {}? {}\n".format(s1, s2, ends_with))


string_matching("abcdabab", "ab")
