package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	var factors1, factors2 []int
	for x := 1; float64(x) <= math.Sqrt(float64(n)); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}

	if (math.Pow(float64((factors2[len(factors2)-1])), 2)) == float64(n) {
		factors1 = append(factors1, factors2[len(factors2)-1])
	}

	factors1 = append(factors1, reverseFactors(factors2)...)

	return factors1
}

func reverseFactors(input []int) []int {
	if len(input) == 0 {
		return input
	}
	return append(reverseFactors(input[1:]), input[0])
}

func main() {
	for _, i := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", i, factor(i))
	}
}
