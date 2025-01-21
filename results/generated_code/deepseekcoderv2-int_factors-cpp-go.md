 Sure! Here's the equivalent Go code for the provided C++ program:

```go
package main

import (
	"fmt"
	"sort"
)

// GenerateFactors computes the factors of a positive integer n.
func GenerateFactors(n int) []int {
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
	samples := []int{3135, 45, 60, 81}

	for _, sample := range samples {
		factors := GenerateFactors(sample)
		fmt.Printf("Factors of %4d are: ", sample)
		for _, factor := range factors {
			fmt.Printf("%d ", factor)
		}
		fmt.Println()
	}
}
```

### Explanation:
1. **Function Definition**: The `GenerateFactors` function in Go is equivalent to the C++ code. It computes the factors of a given integer `n`.
2. **Appending Factors**: In Go, we use `append` to add elements to slices. This replaces the need for vectors and dynamic resizing in C++.
3. **Sorting**: The `sort.Ints(factors)` function is used to sort the slice of integers.
4. **Main Function**: The main function iterates over a list of sample numbers, calls `GenerateFactors` to get the factors, and prints them using `fmt.Printf`.

This Go code should produce similar output to the C++ program when run.
