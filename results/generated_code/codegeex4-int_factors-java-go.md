```go
package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(n int64) []int64 {
	var factors = make(map[int64]bool)
	factors[n] = true
	factors[1] = true

	for test := n - 1; float64(test) >= math.Sqrt(float64(n)); test-- {
		if n%test == 0 {
			factors[test] = true
			factors[n/test] = true
		}
	}

	var result []int64
	for key := range factors {
		result = append(result, key)
	}
	sort.Slice(result, func(i, j int) bool { return result[i] < result[j] })
	return result
}

func main() {
	fmt.Println(factors(100))
}
```
In the Go version of your Java code above, I use a map to store the factors instead of using TreeSet which stores unique values in sorted order. I then append the factors into a slice and return them after sorting it. You can call the `factors` function with an integer value to test it.

Please note that the Java code you provided doesn't account for negative input and inputs less than 1, but this Go version does not have any such checks as Go's type system does not allow negative integers or zero to be passed into a function expecting int64.
