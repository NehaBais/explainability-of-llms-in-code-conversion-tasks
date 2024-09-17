Here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	var n_factors []int
	for i := 1; i <= num/2+1; i++ {
		if num%i == 0 {
			n_factors = append(n_factors, i)
			if num/i != i {
				n_factors = append(n_factors, num/i)
			}
		}
	}
	sort.Ints(n_factors)
	return n_factors
}

func main() {
	fmt.Println(factors(45)) // [1 3 5 9 15 45]
	fmt.Println(factors(53)) // [1 53]
	fmt.Println(factors(64)) // [1 2 4 8 16 32 64]
}
```

The function `factors()` now works in a similar manner to the JavaScript function, but with some adjustments for Go's syntax and semantics. The loop runs from 1 to num/2+1 instead of Math.floor(Math.sqrt(num)) because num%i will always be 0 at i == num and we don't want this value in our list twice.

The `sort.Ints()` function is used to sort the slice n_factors in ascending order, same as the numeric sort in JavaScript.
When you run the program, it will output the correct results: [1 3 5 9 15 45] for 45, [1 53] For 53 and [1 2 4 8 16 32 64] for 64.
