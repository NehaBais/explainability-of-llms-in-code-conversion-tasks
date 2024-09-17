def main():
    assert factor(100) == [1, 2, 4, 5, 10, 20, 25, 50, 100]
    assert factor(101) == [1, 101]


def factor(num):
    factors = []  # creates a new list for the factors of the number

    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)  # appends smallest factor to factors
            factors.append(int(num / i))  # appends largest factor to factors

    factors = sorted(
        factors
    )  # sorts the factors into numerical order for viewing purposes

    return factors  # returns the factors
