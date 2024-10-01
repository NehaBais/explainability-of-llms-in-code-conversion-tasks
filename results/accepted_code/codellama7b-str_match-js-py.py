stringA = "tacoloco"
stringB = "co"

# stringA starts with stringB
q1 = stringA.startswith(stringB)
print("Does '{}' start with '{}'? {}".format(stringA, stringB, q1))

# stringA contains stringB
q2 = stringA.find(stringB)
print("Is '{}' contained in '{}'? {}".format(stringB, stringA, ~q2))
if q2:
    print("   In fact, it happens {} times within '{}', at index{} {}. ".format(q2matches.length, stringA, q2, ~q2 ? "Yes" : "No"))

# stringA ends with stringB
q3 = stringA.endswith(stringB)
print("Does '{}' end with '{}'? {}".format(stringA, stringB, q3))