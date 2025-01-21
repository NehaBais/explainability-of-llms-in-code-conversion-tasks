package main

import (
	"fmt"
	"math"
	"sort"
)

// factors computes the factors of a positive integer n and returns them in a sorted set.
func factors(n int64) []int64 {
	factors := make([]int64, 0)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			factors = append(factors, test)
			if test != n/test {
				factors = append(factors, n/test)
			}
		}
	}
	sort.Slice(factors, func(i, j int) bool {
		return factors[i] < factors[j]
	})
	return factors
}

func main() {
	n := int64(12) // Example number
	fmt.Println("Factors of", n, "are:", factors(n))
}
