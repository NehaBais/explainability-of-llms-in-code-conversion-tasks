package main

import (
	"fmt"
	"sort"
)

func factor(num int) []int {
	var factors []int = make([]int, 0) // creates a new slice for the factors of the number

	for i := 1; i <= num/2; i++ {
		if num%i == 0 {
			factors = append(factors, i)     // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}
	sort.Ints(factors) // sorts the factors into numerical order for viewing purposes
	return factors     // returns the factors
}

func main() {
	fmt.Println(factor(100)) // prints [1 2 4 5 10 20 25 50 100]
	fmt.Println(factor(101)) // prints [1 101]
}
