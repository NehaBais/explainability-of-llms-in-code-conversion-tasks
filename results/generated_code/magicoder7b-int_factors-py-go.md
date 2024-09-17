 Below is the equivalent Golang code for your Python script. 
It's important to note that Go language does not have a function like math.isqrt() in Python which returns the largest integer less than or equal to x. So instead of using math.isqrt, I am using int(math.Sqrt()) function from "math" package to compute the square root and then converting it back to an integer with no decimal part.
```Go
package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1, factors2 := make([]int, 0), make([]int, 0)
	for x := 1; x <= int(math.Sqrt(float64(n))); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}
	x := int(math.Sqrt(float64(n))) + 1
	if x*x == n {
		factors1 = append(factors1, x)
	}
	for i := len(factors2) - 1; i >= 0; i-- {
		factors1 = append(factors1, factors2[i])
	}
	return factors1
}

func main() {
	for _, n := range []int{45, 53, 64} {
		fmt.Printf("%d: factors: %v\n", n, factor(n))
	}
}
```
In Golang, you do not need to define the type of a variable when declaring it unless required by a function's signature or to explicitly state intent. Also note that Python's print function uses a "%", "s" and "(%d: factors: %v\n)" to format the string. In Go, we use fmt.Printf with the same arguments.
