package main

import (
	"math"
)

func factors(n int64) []int64 {
	factors := make([]int64, 0)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := int64(math.Sqrt(float64(n))); test > 1; test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	return factors
}
