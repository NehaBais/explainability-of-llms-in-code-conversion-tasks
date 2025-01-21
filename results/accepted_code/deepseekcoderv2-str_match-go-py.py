def match(first, second):
    print(f"1. '{first}' starts with '{second}': {first.startswith(second)}")

    index = first.find(second)
    contains_match = index != -1
    print(f"2. '{first}' contains '{second}': {contains_match}")

    if contains_match:
        print(f"2.1. at location {index}")
        start = index + 1
        while True:
            index = first.find(second, start)
            if index == -1:
                break
            print(f"2.2. at location {index}")
            start = index + 1

    print(f"3. '{first}' ends with '{second}': {first.endswith(second)}")


match("abracadabra", "abr")
