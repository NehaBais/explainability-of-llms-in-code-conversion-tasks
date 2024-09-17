package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1, factors2 := make([]int, 0), make([]int, 0)
	for x := 1; float64(x*x) <= math.Sqrt(float64(n)); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	if len(factors1)*len(factors1) == n {
		factors1 = append(factors1, int(math.Sqrt(float64(n))))
	}
	reverse(&factors2)
	result := make([]int, 0, len(factors1)+len(factors2))
	result = append(result, factors1...)
	result = append(result, factors2...)
	return result
}

func reverse(arr *[]int) {
	for i, j := 0, len(*arr)-1; i < j; i, j = i+1, j-1 {
		(*arr)[i], (*arr)[j] = (*arr)[j], (*arr)[i]
	}
}

func main() {
	for _, i := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", i, factor(i))
	}
}
