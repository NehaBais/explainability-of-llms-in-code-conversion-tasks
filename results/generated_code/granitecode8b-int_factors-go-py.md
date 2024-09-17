Here is the Python code that computes the factors of a positive integer:
```python
def print_factors(nr):
 if nr < 1:
 print("Factors of", nr, "not computed")
 return
 print("Factors of", nr, ":")
 fs = [1]
 def apf(p, e):
 n = len(fs)
 for i in range(e):
 pp = p * (i + 1)
 for j in range(n):
 fs.append(fs[j] * pp)
 e = 0
 while nr % 2 == 0:
 nr //= 2
 e += 1
 apf(2, e)
 d = 3
 while nr > 1:
 if d * d > nr:
 d = nr
 e = 0
 while nr % d == 0:
 nr //= d
 e += 1
 if e > 0:
 apf(d, e)
 print(fs)
 print("Number of factors =", len(fs))
```
The Python code is similar to the Golang code in terms of logic and structure. It first checks if the input number is less than 1 and prints a message if so. Then it initializes an array `fs` with the factor 1. The function `apf` is used to append new factors to the array `fs`. The code then finds the exponent of 2 in the prime factorization of the input number by right-shifting the number until it becomes odd. It then calls the function `apf` to add the factors of 2 to the array `fs`. The code then iterates over odd numbers starting from 3 up to the square root of the input number, finding the exponent of each odd number in the prime factorization of the input number and calling the function `apf` to add the factors of that number to the array `fs`. Finally, it prints the array of factors and the number of factors.

