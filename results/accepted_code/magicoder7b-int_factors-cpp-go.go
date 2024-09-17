package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := make([]int, 2)
	factors[0] = 1
	factors[1] = n

	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}

	sort.Ints(factors[1:]) // Sort the factors starting from index 1 (0th element is always 1 and is already at the correct position in the slice).
	return factors
}

func main() {
	SampleNumbers := []int{3135, 45, 60, 81}

	for _, n := range SampleNumbers {
		factors := GenerateFactors(n)
		fmt.Printf("Factors of %d are: ", n)

		// Print factors
		for _, factor := range factors[1:] { // Start from index 1 (0th element is always 1 and is already at the correct position in the slice).
			fmt.Print(factor, " ")
		}
		fmt.Println()
	}
}
