package main

import (
	"fmt"
	"math"
)

func factors(n int64) []int64 {
	var factors = make(map[int64]bool)
	factors[1] = true
	factors[n] = true
	for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			factors[test] = true
			factors[n/test] = true
		}
	}
	var result []int64
	for factor := range factors {
		result = append(result, factor)
	}
	return result
}

func main() {
	fmt.Println(factors(10))
}
