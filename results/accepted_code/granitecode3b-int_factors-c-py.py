def factor(num):
 factors = []
 divisor = 1
 while divisor * divisor <= num:
 if num % divisor == 0:
 factors.append(divisor)
 factors.append(num // divisor)
 divisor += 1
 return factors
 
nums2factor = [2059, 223092870, 3135, 45]
for num in nums2factor:
 print("Factors of", num, "are:", factor(num))