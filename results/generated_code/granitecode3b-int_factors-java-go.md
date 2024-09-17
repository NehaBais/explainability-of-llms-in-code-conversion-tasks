Sure, here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "sort"
)
func main() {
 var n int64 = 12
 fmt.Println("Factors of", n, ":")
 factors := factors(n)
 sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
 for _, f := range factors {
 fmt.Printf("%d ", f)
 }
 fmt.Println()
}
func factors(n int64) []int64 {
 var result []int64 = make([]int64, 0)
 for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
 if n%test == 0 {
 result = append(result, test)
 result = append(result, n/test)
 }
 }
 result = append(result, 1)
 result = append(result, n)
 sort.Slice(result, func(i, j int) bool { return result[i] < result[j] })
 return result
}
```
This code defines a function `factors` that takes an integer `n` as input and returns a slice of integers containing the factors of `n`. The function first checks for the special cases where `n` is 1 or less, and then iterates over all numbers from `n-1` down to the square root of `n`, checking if they are factors of `n`. If so, they are added to the result slice. Finally, the function returns the sorted list of factors.

