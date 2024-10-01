def match(first, second):
    print(f"1. {first} starts with {second}: {first.startswith(second)}")
    if first.find(second) >= 0:
        print(f"2. {first} contains {second}: True")
        print(f"2.1 at location {first.find(second)}")
        idx = first.find(second, first.find(second) + 1)
        while idx != -1:
            print(f"2.2 at location {idx}")
            idx = first.find(second, idx + 1)
        print("2.2 and that's all")
    else:
        print(f"2. {first} contains {second}: False")

    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
