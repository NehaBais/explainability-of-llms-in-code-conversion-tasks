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
