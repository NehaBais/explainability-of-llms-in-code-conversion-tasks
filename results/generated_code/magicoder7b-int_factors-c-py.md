 The given code is written in C language and it computes the factors of a number. Here's how to convert this into Python:

```python
import math

def factor(num):
    factors = []
    for dvsr in range(1,int(math.sqrt(num))+1):
        if num % dvsr != 0 or dvsr*dvsr == num :
            continue
        factors.append(dvsr)
        factors.append(num//dvsr)
    return sorted(factors)

nums2factor = [2059, 223092870, 3135, 45]

for i in nums2factor:
    print("Factors of %d are:" % i)
    for j in factor(i):
        print("%s %d" % ("," if j != factor[0] else "",j))
```
This Python script does the same thing as your C program. It finds all factors of each number in the `nums2factor` list, and prints them. The `factor()` function is similar to your `factor()` function in C, it just doesn't handle reallocating memory for the factor list because lists in Python can dynamically grow. If you were using this code in a real-world application where performance was a concern, however, you might want to consider implementing a more efficient algorithm to find factors or use Python's built-in `math` module which has a function called `factorial()` that could be used here to improve efficiency (though the speed difference is unlikely to be significant).
