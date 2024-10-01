This is a simplified version of the Golang code. I couldn't complete it in Python because Go doesn't support multiple return values. In Python, you can use functions with multiple return values or you can assign the results to variables. Here's how I would write it in Python:

```python
import sys
from typing import Tuple

def match(first: str, second: str) -> None:
    print(f"1. {first} starts with {second}:", first.startswith(second))

    if second in first:
        index = first.find(second)

        while True:
            print(f"2. {first} contains {second}: at location {index}")

            start_index = index + len(second)
            index = first[start_index:].find(second)

            if index == -1:
                break

    else:
        print("2. Not found.")
    
    print(f"3. {first} ends with {second}:", first.endswith(second))


if __name__ == "__main__":
    match("abracadabra", "abr")
```

If you want to find out the exact location, you can modify the code to return the position of the substring in the string:


def match(first: str, second: str) -> None:
    print(f"1. {first} starts with {second}:", first.startswith(second))

    if second in first:
        index = first.find(second)

        while True:
            print(f"2. {first} contains {second}: at location {index}")

            start_index = index + len(second)
            index = first[start_index:].find(second)

            if index == -1:
                break

    else:
        print("2. Not found.")
    
    print(f"3. {first} ends with {second}:", first.endswith(second))


if __name__ == "__main__":
    match("abracadabra", "abr")

This code will return the starting index of the substring in the string, not just a boolean value indicating whether the substring is present or not. If you want to keep it simple and get multiple occurrences of the substring, you might have to adjust your Python code accordingly.
