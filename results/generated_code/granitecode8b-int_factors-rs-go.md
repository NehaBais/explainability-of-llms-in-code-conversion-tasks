Here's the converted code from Rust to Golang:
```go
package main
import (
 "fmt"
)
func factor(num int) []int {
 var factors []int
 for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
 if num%i == 0 {
 factors = append(factors, i)
 factors = append(factors, num/i)
 }
 }
 sort.Ints(factors)
 return factors
}
func main() {
 fmt.Println(factor(100)) // [1 2 4 5 10 10 20 25 50 100]
 fmt.Println(factor(101)) // [1 101]
}
```
This code computes the factors of a positive integer by iterating over all possible factors up to the square root of the number, and checking if each factor divides the number evenly. If it does, both the factor and its corresponding divisor are added to the list of factors. The resulting list is then sorted in numerical order and returned.
Note that this code assumes that the input `num` is a positive integer. If negative numbers or non-integer inputs are allowed, additional checks may be needed to ensure that the function handles those cases correctly.

