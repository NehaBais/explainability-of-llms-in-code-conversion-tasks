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
