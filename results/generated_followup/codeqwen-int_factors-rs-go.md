Error: "undefined: A"

Fix: "import (  fmt )"

Corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	assertEqual([]int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}, factor(100)) // asserts that two expressions are equal to each other
	assertEqual([]int{1, 101}, factor(101))
}

func factor(num int) []int {
	var factors []int = make([]int, 0) // creates a new slice for the factors of the number

	for i := 1; i <= (num / 2); i++ {
		if num%i == 0 {
			factors = append(factors, i)     // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}

	return factors // returns the factors
}

func assertEqual(A []int, B []int) {
	if len(A) != len(B) {
		fmt.Println("Test failed!")
		return
	}

	for i := range A {
		if A[i] != B[i] {
			fmt.Println("Test failed!")
			return
		}
	}
	fmt.Println("Test passed!")
}
```
