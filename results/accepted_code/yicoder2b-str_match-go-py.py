def match(first, second):
    print(f"1. {first} starts with {second}: {first.startswith(second)}")
    print(f"2. {first} contains {second}: {second in first}")
    if second in first:
        for i in range(len(first)):
            if first[i:].startswith(second):
                print(f"2.1. at location {i}")
                j = i + 1
                while j < len(first) and first[j:].find(second) >= 0:
                    print(f"2.2. at location {j}")
                    j += 1
        print("2.2. and that's all")
    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
