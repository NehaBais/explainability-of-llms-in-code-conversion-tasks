package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int64 = 12
	fmt.Println("Factors of", n, ":")
	factors := factors(n)
	sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
	for _, f := range factors {
		fmt.Printf("%d ", f)
	}
	fmt.Println()
}
func factors(n int64) []int64 {
	var result []int64 = make([]int64, 0)
	for test := n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			result = append(result, test)
			result = append(result, n/test)
		}
	}
	result = append(result, 1)
	result = append(result, n)
	sort.Slice(result, func(i, j int) bool { return result[i] < result[j] })
	return result
}
