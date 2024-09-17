package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	var n_factors []int
	for i := 1; i <= num/2+1; i++ {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors)
	return n_factors
}

func main() {
	fmt.Println(factors(45)) // [1 3 5 9 15 45]
	fmt.Println(factors(53)) // [1 53]
	fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
}
