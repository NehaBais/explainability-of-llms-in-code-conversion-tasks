def string_matching(s1, s2):
    # String A starts with string B
    q1 = s1.startswith(s2)

    # String A contains string B
    if q1 is False:
        q2 = s1.find(s2)

        # Multiple matches
        matches = [i for i in range(len(s1)) if s1[i : i + len(s2)] == s2]

        # String A ends with string B
        q3 = s1.endswith(s2)
    else:
        q2, matches, q3 = "Yes", [], False

    print("1: Does '{}' start with '{}'? {}".format(s1, s2, "Yes." if q1 else "No."))
    print(
        "2: Is '{}' contained in '{}'? {}".format(
            s2, s1, "Yes, at index {}.".format(q2) if q2 != -1 else "No."
        )
    )

    if matches and len(matches) > 1:
        print(
            "   In fact, it happens {} times within '{}', at indices {}{}.".format(
                len(matches),
                s1,
                matches[0],
                ", " + str(matches[-1]) if len(matches) > 1 else "",
            )
        )
    elif matches and len(matches) == 1:
        print(
            "   In fact, it happens {} time within '{}', at index{}.".format(
                len(matches), s1, matches[0]
            )
        )

    print("3: Does '{}' end with '{}'? {}".format(s1, s2, "Yes." if q3 else "No."))


# Test the function
string_matching("tacoloco", "co")
