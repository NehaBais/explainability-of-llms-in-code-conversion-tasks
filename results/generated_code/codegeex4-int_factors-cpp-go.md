```go
package main

import (
	"fmt"
	"sort"
)

func generateFactors(n int) []int {
	factors := []int{1, n}
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
			if i > 0 {
				fmt.Print(", ")
			}
			fmt.Print(factor)
		}
		fmt.Println()
	}
}
```

The Go version above takes a similar approach to the original C++ code. Here's what it does:

- The `generateFactors` function computes and returns the factors of an input number.
- In the main part, we loop through an array of sample numbers, generate their factors using `generateFactors`, and print them out.

Note that the Go language doesn't have a built-in way to get the size of a slice (like in C++ you could do with `sizeof`). Instead, we directly use the length of the slice (`len(sampleNumbers)`). The `range` keyword in Go returns both the index and the value of each element in the slice.
