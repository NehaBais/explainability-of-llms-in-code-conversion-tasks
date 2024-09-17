package main

import (
	"fmt"
	"math"
)

func factor(num int32) []int32 {
	var factors []int32
	for i := 1; i <= int32(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			factors = append(factors, num/i)
		}
	}
	sort.Ints(factors)
	return factors
}

func main() {
	assert.Equal([]int32{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}, factor(100)) // asserts that two expressions are equal to each other
	assert.Equal([]int32{1, 101}, factor(101))
}
