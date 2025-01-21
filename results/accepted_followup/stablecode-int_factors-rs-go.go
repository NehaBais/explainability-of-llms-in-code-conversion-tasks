package main

import (
		"fmt"
			"sort"
			"math"
	)

func factor(num int) []int {
	var factors []int

	for i := 1; i <= int(math.Sqrt(float64(num))))+1; i++ { 
		if num%i == 0 {
			factors = append(factors, i))
			factors = append(factors, num/i))
		}
	}
	
	sort.Ints(factors)

	return factors
}

func main() {
	fmt.Println(factor(100)))
	fmt.Println(factor(101)))
}