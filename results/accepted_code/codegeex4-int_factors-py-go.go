package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)
	for x := 1; x <= int(math.Sqrt(float64(n))); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}

	factors1 = append(factors1, factors2...)
	for i, j := 0, len(factors1)-1; i < j; i, j = i+1, j-1 {
		factors1[i], factors1[j] = factors1[j], factors1[i]
	}
	return factors1
}

func main() {
	for _, val := range []int{45, 53, 64} {
		fmt.Printf("%d: Factors: %v\n", val, factor(val))
	}
}
