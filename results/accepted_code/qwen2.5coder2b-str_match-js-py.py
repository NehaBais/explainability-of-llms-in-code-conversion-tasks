def string_matching(stringA, stringB):
    # Determine if the first string starts with second string
    q1 = stringA.startswith(stringB)

    # Determine if the first string contains the second string at any location
    try:
        q2 = stringA.index(stringB)
        print("   The position of the match is:", q2)
    except ValueError:
        print("   No match found")

    # Multiple matches
    pattern = re.compile(stringB, re.IGNORECASE)  # Use case-insensitive search
    matches = pattern.findall(stringA)

    if matches:
        print("   Found", len(matches), "matches in the string.")
        for i, match in enumerate(matches):
            print(f"      Match found at index {match}.")
    else:
        print("   No matches found")

    # Determine if the first string ends with second string
    q3 = stringA.endswith(stringB)

    return q1, q2, q3


stringA = "tacoloco"
stringB = "co"

q1, q2, q3 = string_matching(stringA, stringB)

print("1: Does '" + stringA + "' start with '" + stringB + "'? ", q1)
print("2: Is '" + stringB + "' contained in '" + stringA + "'? ", q2)
print("   End with:", q3)
