```python
def match(first, second):
    # 1. Determining if the first string starts with second string
    print(f"1. {first} starts with {second}: {first.startswith(second)}")

    # 2. Determining if the first string contains the second string at any location
    index = first.find(second)
    print(f"2. {first} contains {second}: {index >= 0}")

    if index >= 0:
        # 2.1. Print the location of the match
        print(f"2.1. at location {index}")

        # 2.2. Handle multiple occurrences of a string
        start = index + 1
        while True:
            index = first.find(second, start)
            if index < 0:
                break
            print(f"2.2. at location {index}")
            start = index + 1

        print("2.2. and that's all")

    # 3. Determining if the first string ends with the second string
    print(f"3. {first} ends with {second}: {first.endswith(second)}")


match("abracadabra", "abr")
```
