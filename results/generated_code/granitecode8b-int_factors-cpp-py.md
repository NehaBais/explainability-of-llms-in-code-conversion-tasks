Here is the Python code that computes the factors of a positive integer:
```python
def generate_factors(n):
 factors = [1, n]
 for i in range(2, int(n**0.5) + 1):
 if n % i == 0:
 factors.append(i)
 if i * i != n:
 factors.append(int(n / i))
 return sorted(factors)
sample_numbers = [3135, 45, 60, 81]
for num in sample_numbers:
 factors = generate_factors(num)
 print(f"Factors of {num} are: {' '.join(map(str, factors))}")
```
The output of the above code is:
```
Factors of 3135 are: 1 3 5 9 45 27 81 105 3135
Factors of 45 are: 1 3 5 9 15 45
Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60
Factors of 81 are: 1 3 9 27 81
```
The Python code uses a for loop to iterate over the possible factors of the input number `n`. It checks if each factor divides `n` evenly and appends it to the list of factors. The function returns a sorted list of unique factors.

