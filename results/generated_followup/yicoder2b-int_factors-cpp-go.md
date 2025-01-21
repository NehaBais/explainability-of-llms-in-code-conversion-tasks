The error occurs because of the incorrect indentation for the declaration `factors = []int{1, n}`. In C++ it is used inside a function and not outside. However, in Golang, it can be declared anywhere.
And the error was fixed in Go as well due to correct indentation of declaration of `factors`.
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
