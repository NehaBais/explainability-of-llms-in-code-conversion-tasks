def string_matching():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Beginning
    start = s1.find(s3)  # returns 0 if found, -1 otherwise
    if start != -1:
        print("The first string starts with the second string at position", start)

    # End
    end = s1[::-1].find(s3[::-1])
    if end != -1:
        print(
            "The first string ends with the second string at position",
            len(s1) - end - len(s3),
        )

    # Anywhere
    locations = [m.start() for m in re.finditer("(?={0})".format(re.escape(s2)), s1)]
    for loc in locations:
        print("The first string contains the second string at position", loc)


string_matching()
