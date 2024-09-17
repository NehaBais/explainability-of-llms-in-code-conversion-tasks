 Here is the converted code in Python:
```
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
    apf = lambda p, e: fs.extend([fs[i]*p for i in range(len(fs)) for j in range(e)])
    e = 0
    while nr & 1 == 0:
        nr >>= 1
        e += 1
    apf(2, e)
    for d in range(3, int(nr**0.5) + 1, 2):
        if d*d > nr:
            break
        for i in range(e):
            fs.append(fs[i]*d)
    print(fs)
    print("Number of factors =", len(fs))
```
This code uses the same algorithm as the original Go code to compute the factors of a positive integer. It also uses the same `apf` function to append the new factors to the existing list.

Note that in Python, we use `range` instead of `for` loops to iterate over a range of numbers, and we use `format` to insert variables into strings. Additionally, we use `int()` to convert a floating-point number to an integer, which is necessary because Go's `**` operator returns a float64, while Python's `**` operator returns an int or float depending on the inputs.
