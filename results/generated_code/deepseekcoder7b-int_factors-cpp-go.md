Here is the equivalent Go code for your C++ program. 
```go
package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := make([]int,0,2*n) // Avoid unnecessary reallocations
	factors = append(factors, 1, n)
	for i := 2; i * i <= n; i++ {
		if n % i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
	<｜begin▁of▁sentence｜>}
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}
	for _, num := range sampleNumbers {
		factors := GenerateFactors(num)
		sort.Ints(factors) // Sorting the factors
		fmt.Printf("Factors of %4d are: ", num)
		for _, factor := range factors {
			fmt.Printf("%4d", factor)
		}
		fmt.Println()
	}
}
``` 
Just to clarify, Go's `make` function is used in the creation of slices instead of vector for memory allocation and flexibility like C++. In addition, Go does not have a built-in way to append elements at arbitrary indices with "push_back" functionality, so the traditional `append()` method is utilized instead. Finally, the range keyword (`for _, num := range sampleNumbers`) in Go serves as an iterator similar to that of a foreach loop in C++.

