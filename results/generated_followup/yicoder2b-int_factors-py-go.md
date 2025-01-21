The error message "undefined: sqrt" is indicating that there is an undeclared function or variable named "sqrt" in Golang, which Python's isqrt function uses. This can be resolved by including the math package at the top of your program, which includes the required "sqrt" function:

```go
package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1, factors2 := make([]int, 0), make([]int, 0)
	for x := 1; x <= math.Isqrt(float64(n)); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	for _, x := range factors2[len(factors2)/2:] {
		factors1 = append(factors1, x)
	}
	return factors1
}
func main() {
	fmt.Printf("%v: %s\n", 45, factor(45))
	fmt.Printf("%v: %s\n", 53, factor(53))
	fmt.Printf("%v: %s\n", 64, factor(64))
}
```
