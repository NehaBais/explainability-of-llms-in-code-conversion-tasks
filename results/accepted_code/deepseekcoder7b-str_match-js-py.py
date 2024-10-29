# Assigning strings to variables stringA and stringB.
stringA = "tacoloco"
stringB = "co"

# Determining if stringA starts with stringB
q1 = stringA[: len(stringB)] == stringB
print("1: Does '" + stringA + "' start with '" + stringB + "'? ", end="")
print("Yes." if q1 else "No.")

# Determining if stringA contains stringB
q2 = stringB in stringA
if q2:
    print(
        "2: Is '" + stringB + "' contained in '" + stringA + "'? Yes, at index ", end=""
    )
    print(stringA.index(stringB))
else:
    print("2: Is '" + stringB + "' contained in '" + stringA + "'? No.")

# Determining if stringA ends with stringB
q3 = stringA[-len(stringB) :] == stringB
print("3: Does '" + stringA + "' end with '" + stringB + "'? ", end="")
print("Yes." if q3 else "No.")
