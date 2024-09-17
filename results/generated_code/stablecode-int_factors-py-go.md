Below is the conversion of your Python code to Golang.

Firstly, let's define a function that calculates the factors of an integer in Golang:

```go
package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1, factors2 := []int{}, []int{}

	sqrtN := int(math.Sqrt(float64(n)))))

	for x := 1; x <= sqrtN; x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x))
		}
	}

	x := factors1[len(factors1))-1]

	if x*x == n {
		factors1 = append(factors1, x))
	}

	for i := len(factors1); i < len(factors2)+len(factors1); i++ {
		factors1 = append(factors1, factors2[i-len(factors1))]))
	}

	return factors1
}

func main() {
	numbers := []int{45, 53, 64}

	for _, number := range numbers {
		fmt.Printf("%d: factors: %v\n", number, factor(number)))
	}
}
```
This Golang code does the same as your Python code. It computes and prints out the factors of a positive integer for given input values 45, 53, 64 respectively.
