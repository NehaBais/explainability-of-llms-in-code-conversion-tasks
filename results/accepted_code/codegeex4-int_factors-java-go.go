package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(n int64) []int64 {
	var factors = make(map[int64]bool)
	factors[n] = true
	factors[1] = true

	for test := n - 1; float64(test) >= math.Sqrt(float64(n)); test-- {
		if n%test == 0 {
			factors[test] = true
			factors[n/test] = true
		}
	}

	var result []int64
	for key := range factors {
		result = append(result, key)
	}
	sort.Slice(result, func(i, j int) bool { return result[i] < result[j] })
	return result
}

func main() {
	fmt.Println(factors(100))
}
