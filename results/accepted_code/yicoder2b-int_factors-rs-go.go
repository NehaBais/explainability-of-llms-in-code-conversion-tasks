package main

import (
	"fmt"
)

func factor(num int) []int {
	var factors = make([]int, 0) // creates an array for the factors of the number

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i) // appends smallest factor to factors
			if i*2 != num {
				// if the square root of a number is not equal to the number itself, it will append the number divided by its square root to factors
				factors = append(factors, num/i)
			}
		}
	}
	return factors // returns the factors
}

func main() {
	fmt.Println(factor(100)) // prints [45 25]
	fmt.Println(factor(101)) // prints [1 101]
}
