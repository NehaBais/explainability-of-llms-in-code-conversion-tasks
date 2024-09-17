package main

import (
	"fmt"
	"math"
	"sort"
)

func main() {
	fmt.Println(factor(100)) // asserts that two expressions are equal to each other
	fmt.Println(factor(101))
}

// Function factor takes an integer num as input and returns a slice of integers representing the factors
func factor(num int) []int {
	var factors []int // creates a new slice for the factors of the number
	sqrt := int(math.Sqrt(float64(num)))

	for i := 1; i <= sqrt; i++ {
		if num%i == 0 {
			factors = append(factors, i)     // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}

	sort.Ints(factors) // sorts the factors into numerical order for viewing purposes
	return factors     // returns the factors
}
