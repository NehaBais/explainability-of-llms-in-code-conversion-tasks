def print_match(possible_match):
    if possible_match is not None:
        print("Found match at pos {}".format(possible_match))
    else:
        print("Did not find any matches")


def main():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Determining if the first string starts with second string
    assert s1.startswith(s3), f"{s1} does not start with {s3}"
    # Determining if the first string contains the second string at any location
    assert s1.find(s3) != -1, f"{s1} does not contain {s3}"
    print_match(s1.find(s3))  # Found match at pos 0
    print_match(s1.find(s2))  # Did not find any matches
    # Determining if the first string ends with the second string
    assert s2.endswith(s3), f"{s2} does not end with {s3}"


if __name__ == "__main__":
    main()
