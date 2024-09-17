package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0) // creates an empty slice for the factors of the number

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i)     // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}

	// sort.Ints(factors) is not needed as slices in Go are ordered collections
	// unlike vectors or lists in other languages where order depends on how you insert elements.
	return factors
}

func main() {
	fmt.Println(factor(100)) // prints [1 10 4 5 25 100]
	fmt.Println(factor(101)) // prints [1 101]
}
