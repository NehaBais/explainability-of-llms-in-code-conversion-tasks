package main

import (
	"fmt"
	"math"
)

// Function to compute factors of a positive integer
func factor(n int) []int {
	factors := []int{}
	for x := 1; x*x <= n; x++ {
		if n%x == 0 {
			factors = append(factors, x)
			if x != n/x {
				factors = append(factors, n/x)
			}
		}
	}
	return factors
}

func main() {
	for _, i := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", i, factor(i))
	}
}
