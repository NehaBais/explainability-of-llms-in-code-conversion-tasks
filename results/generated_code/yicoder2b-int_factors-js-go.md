The equivalent code in Golang would be:

```Go
package main

import (
	"fmt"
	"sort"
)

func factors(num int) []int {
	var nFactors = make([]int, 0)

	for i := 1; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if i != num/i {
				nFactors = append(nFactors, num / i)
			}
		}
	}
	sort.Ints(nFactors[:]) // numeric sort
	return nFactors
}

func main() {
	fmt.Println(factors(45))  // [1 3 5 9 15 45] 
	fmt.Println(factors(53))  // [1 53] 
	fmt.Println(factors(64))  // [1 2 4 8 16 32 64]
}
```
This code defines a function `factors` that computes the factors of an integer, and then sorts them in ascending order before returning the results. The main function demonstrates how to call this function with some example inputs.
