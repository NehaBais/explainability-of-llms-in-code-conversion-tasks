package main

import (
	"fmt"
	"sort"
)

func factors(n int) []int {
	factors := make([]int, 0)
	for i := 1; i*i <= n; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}
	for i := range sampleNumbers {
		fmt.Printf("Factors of %d are: ", sampleNumbers[i])
		factorsSorted := factors(sampleNumbers[i])
		// Sort the slices with the given function
		sort.Ints(factorsSorted)
		// Print the slice using 'for' loop
		for j := range factorsSorted {
			fmt.Printf("%d ", factorsSorted[j])
		}
		fmt.Println()
	}
}
