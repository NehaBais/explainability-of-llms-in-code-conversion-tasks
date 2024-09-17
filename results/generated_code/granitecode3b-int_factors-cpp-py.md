Sure! Here's the Python code that accomplishes the same task as the C++ code you provided:
```python
def generate_factors(n):
 factors = [1, n]
 for i in range(2, int(n**0.5) + 1):
 if n % i == 0:
 factors.append(i)
 if n / i != i:
 factors.append(n // i)
 return sorted(factors)
 
sample_numbers = [3135, 45, 60, 81]
for num in sample_numbers:
 print(f"Factors of {num} are: {generate_factors(num)}")
```
This Python code defines a function `generate_factors` that takes an integer `n` as input and returns a list of its factors. The function first initializes the list with `1` and `n`. Then, it loops over all numbers from `2` to the square root of `n`, checking if each number divides `n` evenly (i.e., `n % i == 0`). If so, it appends that number and its corresponding factor (if applicable) to the list. Finally, it sorts the list and returns it.
The code then defines a list of sample numbers (`sample_numbers`) and loops over them, calling the `generate_factors` function for each one. The output is displayed using `print`, with the factors separated by spaces.

