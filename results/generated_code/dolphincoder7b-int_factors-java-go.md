The equivalent Go code for the given Java function would be:
```
package main
import (
    "math"
    "sorts"
)
func Factors(n int64) []int64 {
    factors := make([]int64, 0, 2)
    factors = append(factors, n)
    factors = append(factors, 1)
    for test := n - 1; test >= math.Sqrt(float64(n)); test-- {
        if n % test == 0 {
            factors = append(factors, test)
            factors = append(factors, n/test)
        }
    }
    sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
    return factors
}
```
The above Go function takes a long integer (int64) as the input and returns a slice of long integers that represent all the factors of that number. It first appends the original number to its list of factors, then adds 1, which is always a factor by itself. Then it iterates from n-1 downwards until it finds the square root of n and checks if n can be divided evenly with each test value. If so, it adds both the divisor (test) and the quotient (n/test) to the list of factors in increasing order. Finally, it sorts the list before returning it.
