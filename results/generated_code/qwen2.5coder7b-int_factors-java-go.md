Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math"
)

func factors(n int64) []int64 {
	var factors []int64
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := n - 1; test >= math.Sqrt(float64(n)); test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	return factors
}

func main() {
	fmt.Println(factors(25))
}
```

This Go code does the same thing as the Java one. It computes the factors of a positive integer by iterating from `n - 1` down to the square root of `n`. If a number is divisible by `test`, it adds both `test` and the result of `n / test` to the slice `factors`. The initial value of `factors` includes `n` and `1`.
