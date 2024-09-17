package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(n int64) []int64 {
	var factors []int64
	sqrtN := int64(math.Sqrt(float64(n)))
	for test := n; test > sqrtN; test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
	return factors
}
func main() {
	fmt.Println(factors(24))
}
