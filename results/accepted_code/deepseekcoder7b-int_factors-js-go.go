package main

import (
	"fmt"
	"sort"
	"math"
)

func Factors(num int) []int {
	var n_factors []int 
	for i := 1; float64(i) <= math.Floor(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			n_factors = append(n<｜begin▁of▁sentence｜>, i)
			if (num/i)!= i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors)   
	return n_factors
}

func main() {
	fmt.Println(Factors(45))  //[1,3,5,9,15,45]
	fmt.Println(Factors(53))  //[1,53]
	fmt.Println(Factors(64))  // [1,2,4,8,16,32,64]
}