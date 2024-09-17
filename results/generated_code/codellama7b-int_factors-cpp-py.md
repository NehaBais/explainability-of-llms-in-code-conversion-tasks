This is a C++ program that computes the factors of a positive integer. Here's the equivalent Python code:
```
import math

def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
    return sorted(factors)

if __name__ == '__main__':
    sample_numbers = [3135, 45, 60, 81]
    for number in sample_numbers:
        factors = generate_factors(number)
        print("Factors of", number, "are:", *factors)
```
The code uses the `math.sqrt` function to find the square root of the input number and then checks if it is an integer. If it is, it adds it as a factor. The factors are sorted using the `sorted` function and then printed along with the original number in the output.
