 The error `undefined: math` occurs because the Go standard library does not have a direct equivalent to Rust's `math` module. To fix this, we need to import the necessary package for mathematical operations.

The corrected code in a single code block is:

```go
package main

import (
	"fmt"
	"sort"
	"math"
)

func main() {
	fmt.Println(factor(100)) // should print [1 2 4 5 10 10 20 25 50 100]
	fmt.Println(factor(101)) // should print [1 101]
}

func factor(num int) []int {
	var factors []int

	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			factors = append(factors, i) // append smallest factor to factors
			if i != num/i {
				factors = append(factors, num/i) // append largest factor to factors if different
			}
		}
	}
	sort.Ints(factors) // sort the factors into numerical order for viewing purposes
	return factors
}
```
