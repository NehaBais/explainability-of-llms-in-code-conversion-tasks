package main

import (
	"fmt"
	"math/big"
)

func factor(num *big.Int) []*big.Int {
	factors := make([]*big.Int, 0)
	for i := big.NewInt(1); i*i <= num; i++ {
		if num.Mod(i, i).Equal(big.NewInt(0)) {
			factorCount := factors.Len() + 2
			factors = append(factors, nil, nil)
			factors[factorCount-2] = i
			factors[factorCount-1] = num.Div(num, i)
		}
	}
	if i*i == num {
		factorCount := factors.Len() + 1
		factors = append(factors, nil)
		factors[factorCount-1] = i
	}
	return factors[:factorCount]
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}
	for _, num := range nums2factor {
		factors := factor(big.NewInt(int64(num)))
		fmt.Printf("factors of %d are: ", num)
		for i, factor := range factors {
			if i != 0 {
				fmt.Print(", ")
			}
			fmt.Println(factor)
		}
		fmt.Println()
	}
}
