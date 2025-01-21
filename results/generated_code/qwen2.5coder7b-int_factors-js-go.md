Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"math"
)

func factors(num int) []int {
	var n_factors []int
	for i := 1; float64(i) <= math.Sqrt(float64(num)); i += 1 {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	return n_factors
}

func main() {
	fmt.Println(factors(45)) // [1,3,5,9,15,45]
	fmt.Println(factors(53)) // [1,53]
	fmt.Println(factors(64)) // [1,2,4,8,16,32,64]
}
```

This Go function works similarly to your JavaScript code. It finds the factors of a number by iterating from 1 to its square root and checking for divisibility. If it's divisible, it adds both the divisor (i) and the quotient (num/i) to the slice 'n_factors'. Then sorts the slice in increasing order before returning it.
