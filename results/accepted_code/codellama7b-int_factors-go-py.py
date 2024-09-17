def main():
    print_factors(-1)
    print_factors(0)
    print_factors(1)
    print_factors(2)
    print_factors(3)
    print_factors(53)
    print_factors(45)
    print_factors(64)
    print_factors(600851475143)
    print_factors(999999999999999989)


def print_factors(nr):
    if nr < 1:
        print("Factors of", nr, "not computed")
        return
    print("Factors of {}: ".format(nr))
    fs = [1]
    apf = lambda p, e: fs.extend([fs[i] * p for i in range(len(fs)) for j in range(e)])
    e = 0
    while nr & 1 == 0:
        nr >>= 1
        e += 1
    apf(2, e)
    for d in range(3, int(nr**0.5) + 1, 2):
        if d * d > nr:
            break
        for i in range(e):
            fs.append(fs[i] * d)
    print(fs)
    print("Number of factors =", len(fs))
