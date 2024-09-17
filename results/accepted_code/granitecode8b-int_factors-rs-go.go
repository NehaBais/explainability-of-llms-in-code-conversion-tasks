package main

import (
	"fmt"
)

func factor(num int) []int {
	var factors []int
	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			factors = append(factors, num/i)
		}
	}
	sort.Ints(factors)
	return factors
}
func main() {
	fmt.Println(factor(100)) // [1 2 4 5 10 10 20 25 50 100]
	fmt.Println(factor(101)) // [1 101]
}
