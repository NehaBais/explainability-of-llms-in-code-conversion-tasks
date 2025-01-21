package main

import (
	"fmt"
	"math"
)

// GenerateFactors returns all factors of n, including 1 and n itself.
func GenerateFactors(n int) []int {
	var factors []int
	for i := 2; i <= math.Floor(math.Sqrt(float64(n))); i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i != n/i {
				factors = append(factors, n/i)
			}
		}
	}
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}
	for _, num := range sampleNumbers {
		factors := GenerateFactors(num)
		fmt.Printf("Factors of %d are: %v\n", num, factors)
	}
}
