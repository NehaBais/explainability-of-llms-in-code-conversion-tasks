Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)
	for x := 1; float64(x)*float64(x) <= float64(n); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	x++
	if int(math.Pow(float64(x), 2)) == n {
		factors1 = append(factors1, x)
	}
	for i := len(factors2)/2 - 1; i >= 0; i-- {
		j := len(factors2) - 1 - i
		factors1 = append(factors1, factors2[i])
		factors2[i], factors2[j] = factors2[j], factors2[i]
	}
	return append(factors1, factors2...)
}

func main() {
	numbers := []int{45, 53, 64}
	for _, n := range numbers {
		fmt.Printf("%d: factors: %v\n", n, factor(n))
	}
}
```
This code will print out the factors of a number in ascending order as Go doesn't have built-in functions for reversing slices or using `extend`. It also uses `math.Pow()` to calculate square roots and `int()` to convert them back to integers, since Go does not support floating point division. Note that the slice concatenation (`append(factors1, factors2...)`) needs to be done at the end to combine both slices into one because Go doesn't support Python-style slicing or extend method on slices.
