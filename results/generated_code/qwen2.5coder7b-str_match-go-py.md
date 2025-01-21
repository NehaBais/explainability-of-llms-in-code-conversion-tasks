Here is the equivalent Python code for the given Golang code:
```python
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
```
In this Python code, `str.startswith(sub)` and `str.endswith(sub)` check if the string starts or ends with a specified substring, respectively. For checking whether a string contains another one at any location, we use `str.find(sub)`. If `find` returns `-1`, it means the substring is not found in the string. The `while` loop is used to find all occurrences of the substring in the string.
