package main

import (
		"fmt"
		"math"
		"sort"
)

func factors(num int) []int {
	nFactors := []int{}

	sqrtNum := int(math.Sqrt(float64(num)))))

	for i := 1; i <= sqrtNum; i++ {} 
	if num%i == 0 {
		nFactors = append(nFactors, i)
		if num/i != i {
			nFactors = append(nFactors, num / i))
		}
	}

	sort.Ints(nFactors)

	return nFactors
}

func main() {
	fmt.Println(factors(45)))  // [1 45] 
	fmt.Println(factors(53))))  // 
[1 53] 
	fmt.Println(factors(64)))) // [1 64] 
}