package main

import (
	"container/heap"
	"fmt"
	"math"
	"sorts"
)

func Factors(n int64) []int64 {
	factors := make([]int64, 0, 2)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := n - 1; test >= math.Sqrt(float64(n)); test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	sorts.Ints(factors)
	return factors
}
