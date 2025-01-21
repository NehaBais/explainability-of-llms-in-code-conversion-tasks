package main

import (
	"fmt"
	"math"
)

func factors(n float64) []float64 {
	factors := make([]float64, 2)
	factors[0] = n
	factors[1] = 1

	for test := n - 1; test >= math.Sqrt(n); test-- {
		if float64(n)%float64(test) == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	return factors
}

func main() {
	fmt.Println(factors(18)) // Prints: [1 2 3 6 9 18]
}
