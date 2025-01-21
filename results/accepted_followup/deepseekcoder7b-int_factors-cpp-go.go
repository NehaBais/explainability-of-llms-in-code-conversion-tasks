package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := make([]int, 0, 2*n)
	factors = append(factors, 1, n)
	for i := 2; i*i <= n; i++ {
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
	for _, num := range sampleNumbers {
		factors := GenerateFactors(num)
		sort.Ints(factors)
		fmt.Printf("Factors of %4d are: ", num)
		for _, factor := range factors {
			fmt.Printf("%4d", factor)
		}
		fmt.Println()
	}
}
