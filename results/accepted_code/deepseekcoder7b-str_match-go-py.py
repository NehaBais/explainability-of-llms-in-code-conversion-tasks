def match(first, second):
    print(f"1. {first} starts with {second}: {first.startswith(second)}")

    i = first.find(second)
    print(f"2. {first} contains {second}: {i != -1}")

    if i != -1:
        print(f"2.1. at location {i}")

        start = i + len(second)
        while True:
            i = first[start:].find(second)

            if i == -1:
                break

            print(f"2.2. at location {start + i}")
            start += i + len(second)

    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
