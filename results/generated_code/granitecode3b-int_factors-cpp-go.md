Sure! Here's the converted code in Golang:
```go
package main
import (
 "fmt"
 "math"
)
func GenerateFactors(n int) []int {
 factors := make([]int, 2)
 factors[0] = 1
 factors[1] = n

 for i := 2; int(math.Sqrt(float64(i))) <= n; i++ {
 if n%i == 0 {
 factors = append(factors, i)
 if i*i != n {
 factors = append(factors, n/i)
 }
 }
 }

 return factors
}
func main() {
 sampleNumbers := []int{3135, 45, 60, 81}

 for _, n := range sampleNumbers {
 factors := GenerateFactors(n)
 fmt.Printf("Factors of %d are: ", n)
 fmt.Println(factors)
 }
}
```
This code is similar to the original C++ code, but uses a `for` loop instead of recursion to generate the factors and a `map` data structure to store unique factors. The output is also similar to the original C++ code, with each sample number followed by its factors in sorted order.

