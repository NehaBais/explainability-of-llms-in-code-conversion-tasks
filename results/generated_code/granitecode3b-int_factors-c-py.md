Sure! Here's the Python code that does the same thing as the given C code:
```python
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
```
This Python code defines a function called `factor` that takes an integer as input and returns a list of its factors. The function iterates through all possible divisors of the number up to its square root, and adds them to the list if they are factors.
The main part of the program creates a list of numbers to factor using a list comprehension, then calls the `factor` function for each number in the list. The output is printed to the console with each factor separated by commas and enclosed in square brackets.

