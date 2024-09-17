```python
def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)

    factors.sort()
    return factors

SampleNumbers = [3135, 45, 60, 81]

for number in SampleNumbers:
    factors = generate_factors(number)
    print(f"Factors of {number} are: {' '.join(map(str,factors))}")
```
In the Python code above, I used list comprehension to create a list of factors for each number. A similar structure is used to loop through the sample numbers and print their factors in the requested format. Note that the map function is used to convert the integers back into strings so they can be joined with spaces between them.
