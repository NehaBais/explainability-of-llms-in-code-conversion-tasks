stringA = "tacoloco"
stringB = "co"

# stringA starts with stringB
q1 = stringA[: len(stringB)] == stringB

# stringA contains stringB
q2 = stringA.find(stringB)

# multiple matches
q2matches = [m.start() for m in re.finditer(stringB, stringA)]

# stringA ends with stringB
q3 = stringA[-len(stringB) :] == stringB

print("1: Does '{}' start with '{}'? {}".format(stringA, stringB, q1))
print("2: Is '{}' contained in '{}'? {}".format(stringB, stringA, q2 != -1))
if q2 != -1 and len(q2matches) > 1:
    print(
        "   In fact, it happens {} times within '{}', at index{}".format(
            len(q2matches), stringA, ", ".join(map(str, q2matches))
        )
    )
print("3: Does '{}' end with '{}'? {}".format(stringA, stringB, q3))
