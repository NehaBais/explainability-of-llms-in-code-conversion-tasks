package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0) // creates a new slice for the factors of the number

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i)     // adds smallest factor to factors
			factors = append(factors, num/i) // adds largest factor to factors
		}
	}
	sort.Ints(factors) // sorts the factors into numerical order for viewing purposes
	return factors     // returns the factors
}

func main() {
	fmt.Assert((factor(100)), "Equal", []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}, "") // asserts that two expressions are equal to each other
	fmt.Assert((factor(101)), "Equal", []int{1, 101}, "")
}
