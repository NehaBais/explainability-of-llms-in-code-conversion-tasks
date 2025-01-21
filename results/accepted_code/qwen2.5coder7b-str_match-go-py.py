def match(first, second):
    print(f"1. {first} starts with {second}: {first.startswith(second)}")

    i = first.find(second)
    if i >= 0:
        print(f"2. {first} contains {second}: True")
        print(f"2.1. at location {i}")
        start = i + len(second) + 1
        while (i := first.find(second, start)) != -1:
            print(f"2.2. at location {start + i}")
            start += i + len(second)
        print("2.2. and that's all")
    else:
        print(f"2. {first} contains {second}: False")

    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
