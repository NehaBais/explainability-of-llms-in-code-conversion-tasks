package main

import (
	"fmt"
	"sort"
)

func factors(n int64) []int64 {
	var factors = make([]int64, 0)
	for i := n; i > 1; i-- {
		if n%i == 0 {
			factors = append(factors, i)
			factors = append(factors, n/i)
		}
	}
	sort.Slice(factors, func(i, j int) bool { return factors[i] > factors[j] })
	return factors
}

func main() {
	fmt.Println(factors(10)) // Prints: [2 5 10]
}
