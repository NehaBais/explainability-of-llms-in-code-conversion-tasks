def string_matching(s1, s2):
    # Determining if the first string starts with second string
    print("Does {} start with {}? {}".format(s1, s2, s1.startswith(s2)))

    # Determining if the first string contains the second string at any location
    loc = s1.find(s2)
    if loc != -1:
        print("{} contains {} starting from position {}".format(s1, s2, loc))
    else:
        print("{} does not contain {}".format(s1, s2))

    # Determining if the first string ends with the second string
    print("Does {} end with {}? {}".format(s1, s2, s1.endswith(s2)))


string_matching("abcd", "ab")


def multi_occurrences(s1, s2):
    loc = s1.find(s2)
    while loc != -1:
        print("Found {} in {} at position {}".format(s2, s1, loc))
        loc = s1.find(s2, loc + 1)  # continue search after previous match


multi_occurrences("abab", "ab")
