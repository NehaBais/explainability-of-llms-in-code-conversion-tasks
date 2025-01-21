The error is because `math.Floor` returns a float64, not an int. To fix this, convert the result of `math.Floor` to an int by using the `int()` function.

The corrected code is:

```go
package main

import (
	"fmt"
	"math"
)

// GenerateFactors returns all factors of n, including 1 and n itself.
func GenerateFactors(n int) []int {
	var factors []int
	for i := 2; i <= int(math.Floor(float64(n))); i++ {
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
