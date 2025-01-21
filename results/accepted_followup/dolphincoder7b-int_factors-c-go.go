package main

import (
	"fmt"
	"math"
)

func factors(num int) []int {
	factors := make([]int, 0)
	for i := 1; i <= math.Sqrt(float64(num)); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			if i*i != num {
				factors = append(factors, int(num/i))
			}
		}
	}
	return factors
}

func main() {
	nums2factor := []int{2059, 223092870, 3135, 45}

	for _, num := range nums2factor {
		fmt.Printf("factors of %d are:\n", num)
		sep := "  "
		for _, factor := range factors(num) {
			fmt.Print(sep)
			fmt.Print(factor)
			sep = ", "
		}
		fmt.Println("")
	}
}
