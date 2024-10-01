s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print("".join(itertools.islice(itertools.dropwhile(lambda x: s.index(x) < n, s), m)))

# Print all characters starting at index 2 (c文字化けdef)
print(
    "".join(
        itertools.islice(itertools.dropwhile(lambda x: s.index(x) < n, s), len(s) - n)
    )
)

# Print all characters except the last (abc文字化けde)
print(
    "".join(
        reversed(
            itertools.islice(
                itertools.dropwhile(lambda x: s.index(x) >= len(s) - 1, reversed(s)),
                len(s) - 1,
            )
        )
    )
)

# Print 3 characters starting with 'b' (bc文)
cpos = s.index("b")
print("".join(itertools.islice(itertools.dropwhile(lambda x: s.index(x) < cpos, s), m)))

# Print 3 characters starting with "けd" (けde)
spos = s.index("けd")
print("".join(itertools.islice(itertools.dropwhile(lambda x: s.index(x) < spos, s), m)))
