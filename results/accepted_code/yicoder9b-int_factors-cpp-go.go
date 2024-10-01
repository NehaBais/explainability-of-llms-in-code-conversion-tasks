package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := make([]int, 0)

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

	for _, n := range sampleNumbers {
		factors := GenerateFactors(n)
		fmt.Printf("Factors of %d are: ", n)
		fmt.Println(append([]int{1, n}, factors...))
	}
}
