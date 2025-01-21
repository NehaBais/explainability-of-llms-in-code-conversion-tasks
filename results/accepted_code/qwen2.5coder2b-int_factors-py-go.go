package main

import (
	"fmt"
)

func factor(n int) []int {
	var factors1 []int
	for x := 1; x <= n/2; x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
		}
	}

	factors1 = append(factors1, n/x)

	factors1 = append(factors1, factors1...)

	return factors1
}

func main() {
	var nums []int = {45, 53, 64}
	for _, i := range nums {
		fmt.Printf("%d: factors: %s\n", i, factor(i))
	}
}