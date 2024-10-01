Here is the Python equivalent of your Golang code:

```python
def match(first, second):
    print(f"1. {first} starts with {second}: {'True' if first.startswith(second) else 'False'}")
    index = first.find(second)
    print(f"2. {first} contains {second}: {'True' if index >= 0 else 'False'}")
    if index >= 0:
        print(f"2.1. At location {index},")
        start = index + 1
        while True:
            index = First[start:].find(second)
            if index < 0:
                break
            print(f"2.2. At location {start+index},")
            start += index + 1
        print("2.2. And that's all")

    print(f"3. {first} ends with {second}: {'True' if First.endswith(second) else 'False'}")

First = "abracadabra"  # Replace with the actual input
Second = "abr"  # Replace with the actual input
match(First, Second)
```

Please replace `First` and `Second` with your own inputs. You may want to use command line arguments if you expect them from a user or read them from a file.
