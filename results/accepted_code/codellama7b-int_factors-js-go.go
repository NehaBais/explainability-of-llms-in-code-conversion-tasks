package main

import (
	"fmt"
)

func factors(num int) []int {
	var n_factors []int

	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors) // numeric sort

	return n_factors
}

func main() {
	fmt.Println(factors(45)) // [1,3,5,9,15,45]
	fmt.Println(factors(53)) // [1,53]
	fmt.Println(factors(64)) // [1,2,4,8,16,32,64]
}
