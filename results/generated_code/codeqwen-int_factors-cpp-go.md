Here is the equivalent code in Golang:

```golang
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

	sort.Ints(factors)
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}

	for _, number := range sampleNumbers {
		factors := GenerateFactors(number)
		fmt.Printf("Factors of %4d are:", number)
		for i, factor := range factors {
			if i != 0 {
				fmt.Printf(" ")
			}
			fmt.Printf("%d", factor)
		}
		fmt.Println()
	}
}
```

This code does the same as your C++ program: it prints the factors of a list of numbers, sorted in ascending order. It uses the append function to add elements to the slice and the sort package's Ints function to sort the slice. The range keyword is used to iterate over a slice or array in Go.
