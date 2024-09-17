from typing import List
import math


def factor(num: int) -> List[int]:
    factors = []
    for d in range(1, int(math.sqrt(num)) + 1):
        if num % d == 0:
            if num // d != d:
                factors.append(d)
                factors.append(num // d)
            else:
                factors.append(d)
    return factors


def main():
    nums2factor = [2059, 223092870, 3135, 45]
    for num in nums2factor:
        print("factors of", num, "are:")
        factors = factor(num)
        sep = " "
        for factor in factors:
            print(sep + str(factor), end="")
            sep = ","
        print()


if __name__ == "__main__":
    main()
