import math


def factor(num):
    factors = []
    for dvsr in range(1, int(math.sqrt(num)) + 1):
        if num % dvsr != 0 or dvsr * dvsr == num:
            continue
        factors.append(dvsr)
        factors.append(num // dvsr)
    return sorted(factors)


nums2factor = [2059, 223092870, 3135, 45]

for i in nums2factor:
    print("Factors of %d are:" % i)
    for j in factor(i):
        print("%s %d" % ("," if j != factor[0] else "", j))
