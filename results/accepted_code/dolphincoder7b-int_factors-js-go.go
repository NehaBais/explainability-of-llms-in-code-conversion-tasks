package main

import (
	"fmt"
	"math/big"
)

func factors(num int64) []int {
	var n_factors []int
	var i int
	var sqrt = big.NewInt(0).Sqrt(big.NewInt(num))
	for i = 1; big.NewInt(int64(i)).Cmp(sqrt) <= 0; i++ {
		if num%int64(i) == 0 {
			n_factors = append(n_factors, i)
			otherFactor := num / int64(i)
			if otherFactor != int64(i) && otherFactor > 0 {
				n_factors = append(n_factors, int(otherFactor))
			}
		}
	}
	return n_factors
}
func main() {
	fmt.Println(factors(45)) // [1 3 5 9 15 45]
	fmt.Println(factors(53)) // [1 53]
	fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
}
