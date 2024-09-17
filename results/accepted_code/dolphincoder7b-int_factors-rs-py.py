from typing import List
import math


def main() -> None:
    assert_eq(factor(100), [1, 2, 4, 5, 10, 10, 20, 25, 50, 100])
    assert_eq(factor(101), [1, 101])


def factor(num: int) -> List[int]:
    factors = []
    for i in range(1, math.isqrt(num) + 2):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    return sorted(factors)
