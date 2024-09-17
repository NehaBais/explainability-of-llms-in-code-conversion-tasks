Here is the Python code that computes the factors of a positive integer:
```python
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
```
The `factor` function takes an integer as input and returns a list of its factors. It first initializes an empty list called `factors`. Then it loops through all the integers from 1 to the square root of the input number (inclusive) using the `range` function. For each integer, it checks if the input number is divisible by it using the modulo operator (`%`). If the remainder is not zero, it means that the input number and the current integer do not have a common factor other than 1, so it skips to the next iteration of the loop.
If the input number is divisible by the current integer, it adds the current integer to the `factors` list. It also checks if the current integer is not equal to its own reciprocal (i.e., if it is not a prime number). If it is not a prime number, it adds its reciprocal to the `factors` list as well.
Finally, it returns the `factors` list. The `nums2factor` variable is a list of integers that you can use to test the `factor` function. The outer loop iterates over each integer in the `nums2factor` list and calls the `factor` function on it. It then prints the factors of the current integer using the `join` method to join all the elements of the list into a single string, separated by commas.

