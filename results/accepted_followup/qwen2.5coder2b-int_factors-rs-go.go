package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0)
	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i)
			if i != num/i {
				factors = append(factors, num/i)
			}
		}
	}
	fmt.Println("Factors of", num, "are:", factors)
	return factors
}

func main() {
	testCases := []struct {
		num  int
		want []int
	}{
		{100, []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}},
		{101, []int{1, 101}},
	}

	for _, tc := range testCases {
		got := factor(tc.num)
		if !reflect.DeepEqual(got, tc.want) {
			fmt.Printf("FAIL: For num %d, expected %v but got %v\n", tc.num, tc.want, got)
		} else {
			fmt.Printf("PASS: For num %d, got the correct factors %v\n", tc.num, got)
		}
	}
}
