def factorize(num):
    factors_list = []
    for divisor in range(1, int(num**0.5) + 1):
        if num % divisor == 0:
            factors_list.append(divisor)
            if divisor != num // divisor:
                factors_list.append(num // divisor)
    return sorted(factors_list)


def main():
    numbers = [2059, 223092870, 3135, 45]
    for number in numbers:
        factors = factorize(number)
        print(f"Factors of {number} are: {factors}")


if __name__ == "__main__":
    main()
