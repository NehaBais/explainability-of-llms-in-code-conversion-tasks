def check_strings(str1, str2):
    # 1. Check if first string starts with second string
    print("Does the first string start with the second?", str1.startswith(str2))

    # 2. Check if first string contains the second string at any location
    loc = -1
    while True:
        try:
            loc = str1.index(str2, loc + 1)
            print("Found match at position", loc)
        except ValueError:
            break

    # 3. Check if first string ends with the second string
    print("Does the first string end with the second?", str1.endswith(str2))
