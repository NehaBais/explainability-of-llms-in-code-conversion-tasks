 Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	n_factors := make([]int, 0)
	for i := 1; i <= num/2; i++ { // because square root function can give wrong results for big numbers.
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if (num / i) != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors)
	return n_factors
}

func main() {
	fmt.Println(factors(45))  // [1,3,5,9,15,45]
	fmt.Println(factors(53))  // [1,53]
	fmt.Println(factors(64))  // [1,2,4,8,16,32,64]
}
```

The main difference is that in Golang you use the `append` function to add values to slices (equivalent of array in JavaScript). Also note that we are using `sort.Ints(n_factors)` instead of `n_factors.sort()` since Go does not support sorting arrays in place by default like JavaScript does.
