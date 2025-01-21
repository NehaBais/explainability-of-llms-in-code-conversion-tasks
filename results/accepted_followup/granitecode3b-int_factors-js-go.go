package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(num int) []int {
	var nFactors []int
	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if i != num/i {
				nFactors = append(nFactors, num/i)
			}
		}
	}
	sort.Ints(nFactors)
	return nFactors
}
func main() {
	fmt.Println(factors(45)) // [1 3 5 9 15 45]
	fmt.Println(factors(53)) // [1 53]
	fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
}
