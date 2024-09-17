Here is the Golang equivalent of the given C++ code:
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

    for i := 2; i <= int(math.Sqrt(float64(n))); i++ {
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
    for _, number := range sampleNumbers {
        factors := GenerateFactors(number)

        fmt.Printf("Factors of %d are: ", number)
        for i := range factors {
            if i > 0 {
                fmt.Print(" ")
            }
            fmt.Print(factors[i])
        }
        fmt.Println()
    }
}
```
I have used the `math` package in Go to calculate the square root of a float64 value, which is not directly available in C++. The `for range` loop iterates over all numbers in the sample array and calls the `GenerateFactors()` function for each number.
