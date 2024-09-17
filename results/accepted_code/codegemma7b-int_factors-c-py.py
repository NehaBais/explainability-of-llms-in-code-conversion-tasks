def factors(num):
    flist = []
    for divisor in range(1, int(num**0.5) + 1):
        if num % divisor == 0:
            flist.append(divisor)
            flist.append(num // divisor)
    return flist


nums2factor = [2059, 223092870, 3135, 45]

for num in nums2factor:
    factors_list = factors(num)
    print(f"Factors of {num} are:")
    print(", ".join(map(str, factors_list)))
