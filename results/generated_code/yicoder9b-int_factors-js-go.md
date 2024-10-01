Here is the equivalent code in Golang:

```Go
package main

import (
	"fmt"
	"math"
)

func factors(num int) []int {
	var nFactors []int
	for i := 1; float64(i) <= math.Floor(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			nFactors = append(nFactors, i)
			if num/i != i {
				nFactors = append(nFactors, num/i)
			}
		}
	}

	for i := range nFactors {
		for j := i + 1; j < len(nFactors); j++ {
			if nFactors[j] < nFactors[i] {
				nFactors[i], nFactors[j] = nFactors[j], nFactors[i]
			}
		}
	}
	return nFactors
}

func main() {
	fmt.Println(factors(45))  // [1 3 5 9 15 45]
	fmt.Println(factors(53))  // [1 53]
	fmt.Println(factors(64))  // [1 2 4 8 16 32 64]
}
```
