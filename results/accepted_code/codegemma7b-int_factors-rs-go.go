package main

import "sort"

func factor(num int32) []int32 {
	factors := []int32{}

	for i := int32(1); i <= int32(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i)
			factors = append(factors, num/i)
		}
	}

	sort.Slice(factors, func(i, j int) bool { return factors[i] < factors[j] })
	return factors
}

func main() {
	assertFactor(vec[1, 2, 4, 5, 10, 10, 20, 25, 50, 100], factor(100))
	assertFactor(vec[1, 101], factor(101))
}

func assertFactor(expected, actual []int32) {
	if len(expected) != len(actual) {
		panic("Factor mismatch")
	}

	for i := range expected {
		if expected[i] != actual[i] {
			panic("Factor mismatch")
		}
	}
}