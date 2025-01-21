The error occurred because the `math` package is not imported in Go, so the `Sqrt` function is undefined. Similarly, the `sort` package is also not imported, so the `Ints` function is undefined.

To fix this error, we need to import the `math` and `sort` packages at the beginning of the code.

Here's the corrected code:
```go
package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(num int) []int {
	var n_factors []int

	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors) // numeric sort

	return n_factors
}

func main() {
	fmt.Println(factors(45)) // [1,3,5,9,15,45]
	fmt.Println(factors(53)) // [1,53]
	fmt.Println(factors(64)) // [1,2,4,8,16,32,64]
}
```
