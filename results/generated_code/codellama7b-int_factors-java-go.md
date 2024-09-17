To convert the Java code to Go, we can use the following code:
```
package main

import (
	"math"
)

func factors(n int64) []int64 {
	factors := make([]int64, 0)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := int64(math.Sqrt(float64(n))); test > 1; test-- {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	return factors
}
```
In Go, we use the `math` package to access mathematical functions. The `factors` function takes an integer input and returns a slice of integers containing all the factors of that number. We initialize an empty slice of integers, append the input number and 1 to it, and then iterate from the square root of the input down to 1 using the `for` loop. If the input is divisible by `test`, we add both `test` and `n/test` to the slice of factors.

It's worth noting that this implementation will only work for positive integers, as in Java the `TreeSet` class only allows positive integers. To make it work for negative integers, we can use a different data structure such as a map or a set.
