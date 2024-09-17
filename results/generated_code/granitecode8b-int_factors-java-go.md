Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
 "math"
 "sort"
)
func factors(n int64) []int64 {
 var factors []int64
 sqrtN := int64(math.Sqrt(float64(n)))
 for test := n; test > sqrtN; test-- {
 if n%test == 0 {
 factors = append(factors, test)
 factors = append(factors, n/test)
 }
 }
 sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
 return factors
}
func main() {
 fmt.Println(factors(24))
}
```
This code computes the factors of a positive integer using a for loop that starts from the input number and subtracts 1 until it reaches the square root of the input number. For each value of `test`, it checks if the input number is divisible by `test` without any remainder. If so, it adds both `test` and `n/test` to a slice of factors. Finally, it sorts the slice of factors using the `sort.Slice()` function from the `sort` package in Golang.

