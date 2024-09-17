This is a simple implementation in Python to find the factors of an integer (not just prime numbers). It uses an algorithm called Pollard rho which finds all the factors within a given range. The function `find_factors` implements this algorithm.
```python
def print_factors(number):
    if number  < 1:
        return "Factors of", number, "not computed"

    factors = []
    apf = lambda p, e : [p**i for i in range(e+1)]
    e = 0
    while number % 2 == 0:
        factors.append(2)
        number //= 2
        e += 1

    if number > 3: # we only need to consider odd numbers for factors
        apf_odd_numbers = apf(3, e)

        p = 3
        while number % p != 0 and p < number:
            if len([i for i in range(number//2 + 1) if i % 2 == 1]) > 0: # we only need to consider odd factors
                q = number // p - 1
                while q > 0:
                    apf_q = apf(p, e)
                    diff = [a-b for a, b in zip(apf_odd_numbers, apf_q)]
                    if len([i for i in diff if i == 2]) != 0:
                        factors.append((number // q))
                    q += 1
            p += 2

    return factors

for num in [-1, 0, 1, 2, 3, 53, 45, 64, 600851475143, 999999999999999989]:
    factors = print_factors(num)
    print("Factors of", num, ":", factors)
```
