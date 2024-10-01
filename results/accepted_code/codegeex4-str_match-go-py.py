def match(first, second):
    print(f"1. {first} starts with {second}: {first.startswith(second)}")
    if second in first:
        start = 0
        while True:
            index = first.find(second, start)
            if index == -1:
                break
            print(f"2. at location {index}")
            start += index + len(second)
        print("and that's all.")
    else:
        print(f"2. {first} contains {second}: False")

    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
