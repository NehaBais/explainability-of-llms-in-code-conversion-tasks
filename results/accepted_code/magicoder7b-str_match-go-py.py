def match(first, second):
    print("1. %s starts with %s: %s" % (first, second, first.startswith(second)))
    i = first.find(second)
    if i != -1:
        print(
            "2. %s contains %s at location(s) %s:"
            % (first, second, [i + 1] * len(second))
        )
        for start in range(i + 1, len(first)):
            i = first[start:].find(second)
            if i == -1:
                break
            print("2.2. at location %d" % (start + i))
    else:
        print("2. %s contains %s: False" % (first, second))

    print("3. %s ends with %s: %s" % (first, second, first.endswith(second)))


match("abracadabra", "abr")
