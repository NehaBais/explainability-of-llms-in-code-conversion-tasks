To convert the given C++ code to Golang, we will use its built-in functions and data structures. We'll also handle the division of `n` by factors in a similar way as in C++. Here's how you can do it:

```go
package main

import (
    "fmt"
    "math"
)

// GenerateFactors returns all factors of n, including 1 and n itself.
func GenerateFactors(n int) []int {
    var factors []int
    for i := 2; i <= math.Floor(math.Sqrt(float64(n))); i++ {
        if n%i == 0 {
            factors = append(factors, i)
            if i != n/i {
                factors = append(factors, n/i)
            }
        }
    }
    return factors
}

func main() {
    sampleNumbers := []int{3135, 45, 60, 81}
    for _, num := range sampleNumbers {
        factors := GenerateFactors(num)
        fmt.Printf("Factors of %d are: %v\n", num, factors)
    }
}
```

This Golang code defines a function `GenerateFactors` that calculates the factors of a given integer. It iterates from 2 to the square root of `n`, checking if `n` is divisible by each number. If it is, the number and its corresponding factor (excluding itself for perfect squares) are added to the result slice.

The `main` function creates an array of sample numbers and calls `GenerateFactors` on each one, printing out the factors for each number.
