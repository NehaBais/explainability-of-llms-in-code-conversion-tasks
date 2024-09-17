package main

import (
	"fmt"
	"sort"
)

func main() {
	fmt.Println(CompareFactors(factor(100), []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}))
	fmt.Println(CompareFactors(factor(101), []int{1, 101}))
}

// Define a function to compute the factors of a number.
func factor(num int) []int {
	var factors []int
	for i := 1; i <= int(float64(num)/2+0.5); i++ {
		if num%i == 0 {
			factors = append(factors, i)     // Pushes smallest factor to factors
			factors = append(factors, num/i) // Pushes largest factor to factors
		}
	}
	sort.Ints(factors) // Sorts the factors into numerical order for viewing purposes
	return factors
}

// Define a function to compare two integer slices.
func CompareFactors(x, y []int) bool {
	if len(x) != len(y) {
		return false
	}
	for i := range x {
		if x[i] != y[i] {
			return false
		}
	}
	return true
}
