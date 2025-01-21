def match_string():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Beginning
    if s1.startswith(s3):
        print("s1 starts with s3")

    # End
    if s1.endswith(s3):
        print("s1 ends with s3")

    # Anywhere
    if s2 in s1:
        loc = s2.find(s3)
        while loc != -1:
            print(f"Match found at position {loc}")
            loc = s2.find(s3, loc + 1)


match_string()
