Here is the Python equivalent of your Go code:

```python
def match(first, second):
    print(f"1. {first} starts with {second}: {'True' if first.startswith(second) else 'False'}")
    i = first.find(second)
    print(f"2. {first} contains {second}: {'True' if i != -1 else 'False'}")
    if i != -1:
        print(f"2.1. at location {i}")
        for start in range(i+1, len(first)):
            j = first.find(second, start)
            if j == -1:
                break
            print(f"2.2. at location {j}")
        print("2.2. and that's all")
    print(f"3. {first} ends with {second}: {'True' if first.endswith(second) else 'False'}")

if __name__ == "__main__":
    match("abracadabra", "abr")
```
In Python, strings don't have a built-in `startsWith` or `endsWith` method like in Go. However, the built-in `find` function can be used to check for the presence of the string and return its start index. If it returns -1, it means the string is not found.

This Python code performs the same operations as your Go code: it checks if the first string starts with the second, if the first contains the second at any location (including multiple occurrences), and if the first ends with the second.
