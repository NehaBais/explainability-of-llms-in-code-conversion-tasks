package main

import (
	"fmt"
)

func Factors(n int) []int {
	factors1 := []int{}
	for x := 1; x*x < n; x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors1 = append(factors1, n/x)
		}
	}

	return factors1
}

func main() {
	fmt.Printf("%d: factors: %v\n", 45, Factors(45))
	fmt.Printf("%d: factors: %v\n", 53, Factors(53))
	fmt.Printf("%d: factors: %v\n", 64, Factors(64))
}
