def string_matching(str1, str2):
    # Check if str1 starts with str2
    print(f'"{str1}" starts with "{str2}":', str1.startswith(str2))

    # Check if str1 contains str2 at any location
    print(f'"{str1}" contains "{str2}":', str2 in str1)

    # Check if str1 ends with str2
    print(f'"{str1}" ends with "{str2}":', str1.endswith(str2))

    # Optional: Print the location of the match for part 2
    if str2 in str1:
        first_loc = str1.find(str2)
        print(f'First occurrence of "{str2}" in "{str1}":', first_loc)

        # Handle multiple occurrences
        loc = first_loc
        count = 0
        while True:
            loc = str1.find(str2, loc + 1)
            if loc == -1:
                break
            print(f'Occurrence {count} of "{str2}" in "{str1}":', loc)
            count += 1


# Test the function with the provided examples
string_matching("abcd", "ab")
string_matching("abcd", "zn")
string_matching("abab", "bb")
string_matching("abab", "ab")
