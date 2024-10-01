import re

stringA = "tacoloco"
stringB = "co"

# stringA starts with stringB
q1 = stringA.startswith(stringB)

# stringA contains stringB
q2 = stringA.find(stringB) != -1

# multiple matches
q2multi = re.finditer(re.compile(stringB), stringA)

q2matches = [match.start() for match in q2multi]

# stringA ends with stringB
q3 = stringA.endswith(stringB)

print(
    '1: Does "{}" start with "{}"? {}'.format(stringA, stringB, "Yes." if q1 else "No.")
)
print(
    '2: Is "{}" contained in "{}"? {}'.format(
        stringB, stringA, "Yes, at index {}".format(q2) if ~q2 else "No."
    )
)

if q2 and len(q2matches) > 1:
    matches_str = ", ".join(map(str, q2matches))
    print(
        '3a: In fact, it happens {} times within "{}", At index{}es {}'.format(
            len(q2matches), stringA, "" if len(q2matches) > 1 else " ", matches_str
        )
    )

print(
    '3b: Does "{}" end with "{}"? {}'.format(stringA, stringB, "Yes." if q3 else "No.")
)
