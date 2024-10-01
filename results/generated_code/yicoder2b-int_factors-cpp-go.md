The equivalent Golang code for the given C++ code is:
```go
package main

import (
	"fmt"
	"sort"
)

func GenerateFactors(n int) []int {
	factors := []int{1, n}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i*i != n {
				factors = append(factors, n/i)
			}
		}
	}
	sort.Ints(factors[:])
	return factors
}

func main() {
	const SampleNumbers []int={3135, 45, 60, 81}
	for _, num := range SampleNumbers {
		fmt.Printf("Factors of %d are: ", num)
		factors := GenerateFactors(num)
		printArray(factors)
	}
}

func printArray(arr []int) {
	for _, val := range arr {
		fmt.Printf("%d ", val)
	}
	fmt.Println()
}
```
