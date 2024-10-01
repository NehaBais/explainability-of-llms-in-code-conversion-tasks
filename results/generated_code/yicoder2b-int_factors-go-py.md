This is the converted code from Golang to Python:
```python
def printFactors(nr): 
    if nr < 1: 
        print ("\nFactors of", nr, "not computed.")
        return
    print ("\nFactors of %d:" % nr)
    fs = [1] 
    apf = lambda p, e: [(fs[j]*p)**e for j in range(len(fs))] or apf(p*2, e-1) if e>0 else None
    for i in range (nr & -1): 
        if nr == 2**i: 
            apf(2, i)
    d = 3
    while d * d <= nr and nr > 1: 
        if d*d > nr : 
            d = nr
        for e in range (nr // d + 1): 
            if nr == d**e: 
                apf(d, e)
            nr /= d
    print (fs)
    print ("Number of factors =", len(fs))
```
Note that this code uses the same algorithm to compute prime factorization. It starts by checking if the number is a power of 2 and if so, multiplies its factors by 2 until it reaches a power of 2 smaller than the original number. Then, it checks for each potential divisor (starting from 3) if it divides the number. This continues until either the square of the current divisor is greater than or equal to the number itself or when the number has been fully reduced to 1. Finally, it prints out all the factors and their multiplicities.
