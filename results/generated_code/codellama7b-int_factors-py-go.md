 Here is the code converted from Python to Go:

```
 package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)
	for x := 1; x <= math.Sqrt(float64(n)); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	x := math.Sqrt(float64(n)) + 1
	if x*x == float64(n) {
		factors1 = append(factors1, int(x))
	}
	factors1 = append(factors1, factors2...)
	return factors1
}

func main() {
	for _, n := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", n, factor(n))
	}
}
```
The Go code uses the fmt package for formatting output and the math package for performing mathematical operations. The main function iterates over a slice of integers and calls the factor function on each element to compute its factors. The factor function returns a slice of integers containing all the factors, including duplicates. The resulting factors are then printed to the console.
