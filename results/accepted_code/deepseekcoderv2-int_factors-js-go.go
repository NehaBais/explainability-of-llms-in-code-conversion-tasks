package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	var nFactors []int
	for i := 1; i <= num/2; i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if num/i != i {
				nFactors = append(nFactors, num/i)
			}
		}
	}
	// Add the number itself as a factor if it's not already included
	if len(nFactors) == 0 || nFactors[len(nFactors)-1] != num {
		nFactors = append(nFactors, num)
	}
	sort.Ints(nFactors)
	return nFactors
}

func main() {
	fmt.Println(factors(45)) // [1, 3, 5, 9, 15, 45]
	fmt.Println(factors(53)) // [1, 53]
	fmt.Println(factors(64)) // [1, 2, 4, 8, 16, 32, 64]
}
