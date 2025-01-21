The error is caused by not importing the `sort` package.

To fix it, import the `sort` package at the beginning of your Go code file.

Here is the corrected code:

```go
package main

import (
	"fmt"
	"sort"
)

func generateFactors(n int) []int {
	var factors = []int{1, n}
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

	for _, num := range sampleNumbers {
		factors := generateFactors(num)
		fmt.Printf("Factors of %d are: ", num)
		for i, factor := range factors {
			if i != len(factors)-1 {
				fmt.Printf("%d ", factor)
			} else {
				fmt.Printf("%d\n", factor)
			}
		}
	}
}
```
