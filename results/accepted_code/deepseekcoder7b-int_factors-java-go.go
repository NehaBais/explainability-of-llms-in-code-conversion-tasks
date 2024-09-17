package main

import (
	"fmt"
	"math"
)

func factors(n int64) map[int64]bool {
	factors := make(map[int64]bool)
	factors[n] = true
	factors[1] = true
	for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			factors[test] = true
			factors[n/test] = true
		}
	}
	return factors
}

func main() {
	fmt.Println(factors(24)) // Use any number you want to calculate the factors for here
}
