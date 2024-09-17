def factors(nr):
    if nr < 1:
        print(f"Factors of {nr} not computed")
        return []

    factors = [1]
    expo = 0

    # Extract factors of 2
    while nr & 1 == 0:
        expo += 1
        nr >>= 1

    def append_factor(p, e):
        for i in range(e):
            for factor in factors:
                factors.append(factor * p)

    append_factor(2, expo)

    # Extract factors of odd numbers
    d = 3
    while nr > 1:
        if d * d > nr:
            d = nr
        expo = 0
        while nr % d == 0:
            expo += 1
            nr //= d
        if expo > 0:
            append_factor(d, expo)

    return factors


if __name__ == "__main__":
    for nr in [
        -1,
        0,
        1,
        2,
        3,
        53,
        45,
        64,
        600851475143,
        999999999999999989,
    ]:
        factors_list = factors(nr)
        print(f"Factors of {nr}: {factors_list}")
        print(f"Number of factors: {len(factors_list)}")
