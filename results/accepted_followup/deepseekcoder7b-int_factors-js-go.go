package main

import (
	"fmt"
	"math"
	"sort"
)

func Factors(num int) []int {
	var factors []int
	for i := 1; float64(i) <= math.Floor(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			if (num / i) != i {
				factors = append(factors, num/i)
			}
		}
	}
	sort.Ints(factors)
	return factors
}

func main() {
	fmt.Println(Factors(45)) //[1,3,5,9,15,45]
	fmt.Println(Factors(53)) //[1,53]
	fmt.Println(Factors(64)) // [1,2,4,8,16,32,64]
}
