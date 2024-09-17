package main

import (
	"fmt"
	"math"
)

func GenerateFactors(n int) []int {
	factors := make([]int, 2)
	factors[0] = 1
	factors[1] = n

	for i := 2; i <= int(math.Sqrt(float64(n))); i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}

	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}
	for _, number := range sampleNumbers {
		factors := GenerateFactors(number)

		fmt.Printf("Factors of %d are: ", number)
		for i := range factors {
			if i > 0 {
				fmt.Print(" ")
			}
			fmt.Print(factors[i])
		}
		fmt.Println()
	}
}
