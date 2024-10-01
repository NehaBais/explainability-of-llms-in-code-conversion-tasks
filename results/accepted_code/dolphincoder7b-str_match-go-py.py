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
