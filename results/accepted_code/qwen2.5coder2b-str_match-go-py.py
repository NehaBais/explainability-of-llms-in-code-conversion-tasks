def match(first, second):
    print(
        f"1. {first} starts with {second}: {'True' if first.startswith(second) else 'False'}"
    )
    i = first.find(second)
    print(f"2. {first} contains {second}: {'True' if i != -1 else 'False'}")
    if i != -1:
        print(f"2.1. at location {i}")
        for start in range(i + 1, len(first)):
            j = first.find(second, start)
            if j == -1:
                break
            print(f"2.2. at location {j}")
        print("2.2. and that's all")
    print(
        f"3. {first} ends with {second}: {'True' if first.endswith(second) else 'False'}"
    )


if __name__ == "__main__":
    match("abracadabra", "abr")
