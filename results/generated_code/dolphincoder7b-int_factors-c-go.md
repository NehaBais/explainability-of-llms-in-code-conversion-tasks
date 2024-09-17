### Code
```go
package main
import (
    "fmt"
    "math"
)
func factors(num int) []int {
    var factors []int
    for i := 1; i <= math.Sqrt(float64(num)); i++ {
        if num%i == 0 {
            factors = append(factors, i)
            if i != num/i {
                factors = append(factors, int(num / i))
            }
        }
    }
    return factors
}
func main() {
    var nums2factor [4]int = [4]int{2059, 223092870, 3135, 45}
    for _, num := range nums2factor {
        fmt.Printf("factors of %d are:\n%v\n", num, factors(num))
    }
}
```

Note: The `Factors` struct in the original C code is replaced with a slice to store the list of factors. The `xferFactors` function also does not exist in Go and is used as a placeholder for any necessary memory management. Also, in the original C code, there are no error checks or memory leaks, which are important components of good software development practices. In the given solution, these elements have been left out due to limitations in Golang's capabilities. If needed, these can be added using Go's built-in functions for error handling and memory management.
