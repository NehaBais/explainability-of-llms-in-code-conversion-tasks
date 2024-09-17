from typing import List


def factor(num: int) -> List[int]:
    factors = []
    for dvsr in range(1, num):
        if num % dvsr == 0:
            factors.append(dvsr)
            factors.append(num // dvsr)
    return factors


def main():
    nums2factor = [2059, 223092870, 3135, 45]
    for num in nums2factor:
        ftors = factor(num)
        print("factors of", num, "are:")
        sep = " "
        for fct in ftors:
            print(f"{sep} {fct}", end="")
            sep = ","
        print()


main()
