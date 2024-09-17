```go
package main

import (
	"fmt"
	"math"
	"sort"
)

func factors(num int) []int {
	nFactors := make([]int, 0)
	for i := 1; i <= int(math.Floor(float64(num))); i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if num/i != i {
				nFactors = append(nFactors, num/i)
			}
		}
	}
	sort.Ints(nFactors) // numeric sort
	return nFactors
}

func main() {
	fmt.Println(factors(45))  // [1,3,5,9,15,45]
	fmt.Println(factors(53))  // [1,53]
	fmt.Println(factors(64))  // [1,2,4,8,16,32,64]
}
```
