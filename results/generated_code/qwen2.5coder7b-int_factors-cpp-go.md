Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func generateFactors(n int) []int {
	var factors = []int{1, n}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}

	sort.Ints(factors)
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}

	for _, num := range sampleNumbers {
		factors := generateFactors(num)
		fmt.Printf("Factors of %d are: ", num)
		for i, factor := range factors {
			if i != len(factors)-1 {
				fmt.Printf("%d ", factor)
			} else {
				fmt.Printf("%d\n", factor)
			}
		}
	}
}
```

This Golang code does the same thing as the C++ code. It generates all factors of a given number `n` and sorts them in ascending order using the `sort.Ints()` function. It then prints out each factor on a separate line for a list of sample numbers.
