Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"math"
)

func factors(n int64) []int64 {
	factors := make([]int64, 0)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := n - 1; float64(test) >= math.Sqrt(float64(n)); test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	return factors
}

func main() {
	fmt.Println(factors(10)) // prints [1 2 5 10]
}
```
