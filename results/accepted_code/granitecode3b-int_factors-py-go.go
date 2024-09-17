package main

import (
	"fmt"
	"math"
)

func isqrt(n int) int {
	if n == 0 {
		return 0
	}
	x := n / 2
	for x*x <= n {
		x = (x + n/x) / 2
	}
	return x
}
func factor(n int) []int {
	factors := make([]int, 0, isqrt(n))
	for x := 1; x < isqrt(n); x++ {
		if n%x == 0 {
			factors = append(factors, x)
			factors = append(factors, n/x)
		}
	}
	x := isqrt(n)
	if x*x == n {
		factors = append(factors, x)
	}
	for i := len(factors) - 1; i >= 0; i-- {
		fmt.Println(factors[i])
	}
	return factors
}
func main() {
	factors := factor(45)
	fmt.Println("Factors of 45:", factors)
	factors = factor(53)
	fmt.Println("Factors of 53:", factors)
	factors = factor(64)
	fmt.Println("Factors of 64:", factors)
}
