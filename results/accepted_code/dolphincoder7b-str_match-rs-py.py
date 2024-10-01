from typing import Optional


def print_match(possible_match: Optional[int]):
    if possible_match is not None:
        print("Found match at pos", possible_match)
    else:
        print("Did not find any matches")


def main():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"

    # Determining if the first string starts with second string
    assert s1.startswith(s3)

    # Determining if the first string contains the second string at any location
    assert s1.find(s3) != -1

    # Print the location of the match
    print_match(s1.index(s3))  # Found match at pos 0
    print_match(s1.find(s2))  # Did not find any matches

    # Determining if the first string ends with the second string
    assert s2.endswith(s3)

    matches = []

    while s1.find(s3, start=pos) != -1:
        pos = s1.find(s3, start=pos) + 1
        matches.append(pos - 1)

    if len(matches):
        print("Found matches at pos", ", ".join(str(m) for m in matches))
    else:
        print("Did not find any matches")


if __name__ == "__main__":
    main()
