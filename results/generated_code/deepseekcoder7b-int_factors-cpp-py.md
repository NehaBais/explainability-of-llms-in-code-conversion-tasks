Here is the Python equivalent of your C++ code. The algorithm remains basically the same but syntax has been changed as per python's nature. Also, in Python it doesn't require to explicitly declare the data type for each variable unlike C++. 

Python Code:
```python
def generate_factors(n):
    factors = [1, n]
    
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
                
    return sorted(factors)

sample_numbers = [3135, 45, 60, 81]
for num in sample_numbers:
    factors = generate_factors(num)
    
    print("Factors of {0:4d} are: ".format(num), end="")
    for factor in factors:
        print(factor, end=" ")
        
    print()  # New line.
```
This Python code does the same as your C++ program. It generates and prints all the factors of a list of numbers (sample_numbers). This is done by using the generate_factors function which returns a sorted list of integers that are factors of its argument. These factor lists are then printed to standard output with an appropriate label.

