package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)

	sqrtN := int(math.Sqrt(float64(n)))
	for x := 1; x <= sqrtN; x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	if (sqrtN * sqrtN) == n {
		factors1 = append(factors1, sqrtN)
	}

	for _, f := range factors2 {
		factors1 = append(factors1, f)
	}

	return factors1
}

func main() {
	for _, i := range []int{45, 53, 64} {
		fmt.Printf("%i: factors: %v\n", i, factor(i))
	}
}
