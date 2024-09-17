Below is the conversion of your C++ code to Golang:

```go
package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := []int{1, n}

	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i * i != n {
				factors = append(factors, n/i))
			}()
		}
	}

	sort.Ints(factors)
	return factors
}

func main() {
	SampleNumbers := []int{3135, 45, 60, 81}

	for i := range SampleNumbers {
		factors := GenerateFactors(SampleNumbers[i]))

		fmt.Printf("Factors of %d are: %v\n", SampleNumbers[i], factors))
	}
}
```
This Golang code does the exact same thing as your C++ code. It computes and prints the factors of each number in the `SampleNumbers` slice.
