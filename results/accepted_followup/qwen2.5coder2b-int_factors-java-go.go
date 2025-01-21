package main

import (
	"fmt"
)

func factors(n int) []int {
	factors := make([]int, 0)
	for i := 1; i <= n/2; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i != n/i {
				factors = append(factors, n/i)
			}
		}
	}
	return factors
}

func main() {
	n := 100 // Example input
	fmt.Println("Factors of", n, ":", factors(n))
}
