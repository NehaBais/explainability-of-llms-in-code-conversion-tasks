package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	// Create an empty slice to store the factors
	factors := make([]int, 0, n)

	// Add 1 and the number itself as factors
	factors = append(factors, 1, n)

	// Iterate from 2 to the square root of the number
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			// Add the factor and its reciprocal (if it's not 1)
			factors = append(factors, i, n/i)
		}
	}

	// Sort the factors using sort.Ints
	sort.Ints(factors)

	return factors
}

func main() {
	// Create a sample array of numbers to compute their factors
	numbers := []int{3135, 45, 60, 81}

	for _, number := range numbers {
		// Compute the factors of the current number
		factors := GenerateFactors(number)

		fmt.Printf("Factors of %d are: ", number)

		// Print the factors using a for loop
		for _, factor := range factors {
			fmt.Printf("%d ", factor)
		}

		fmt.Println()
	}
}
