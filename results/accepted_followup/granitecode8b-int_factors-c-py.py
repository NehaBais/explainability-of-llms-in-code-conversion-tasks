def factor(num):
 factors = []
 for i in range(1, int(num**0.5) + 1):
 if num % i == 0:
 factors.append(i)
 if i != num // i:
 factors.append(num//i)
 return factors
nums2factor = [2059, 223092870, 3135, 45]
for num in nums2factor:
 print("Factors of", num, "are:", ", ".join(map(str, factor(num))))