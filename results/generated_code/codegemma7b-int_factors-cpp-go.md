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

	sort.Ints(factors)
	return factors
}

func main() {
	sampleNumbers := []int{3135, 45, 60, 81}

	for _, number := range sampleNumbers {
		factors := GenerateFactors(number)
		fmt.Printf("Factors of %4d are: ", number)
		for _, factor := range factors {
			fmt.Print(factor, " ")
		}
		fmt.Println()
	}
}
```
