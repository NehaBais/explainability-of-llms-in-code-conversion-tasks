package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)
	for x := 1; float64(x)*float64(x) <= float64(n); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	x++ // Move this line inside the loop
	if int(math.Pow(float64(x), 2)) == n {
		factors1 = append(factors1, x)
	}
	for i := len(factors2)/2 - 1; i >= 0; i-- {
		j := len(factors2) - 1 - i
		factors1 = append(factors1, factors2[i])
		factors2[i], factors2[j] = factors2[j], factors2[i]
	}
	return append(factors1, factors2...)
}

func main() {
	numbers := []int{45, 53, 64}
	for _, n := range numbers {
		fmt.Printf("%d: factors: %v\n", n, factor(n))
	}
}
