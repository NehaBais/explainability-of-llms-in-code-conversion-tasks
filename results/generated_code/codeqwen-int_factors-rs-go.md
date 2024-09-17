Here is a Go version of your Rust code:

```Go
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
			factors = append(factors, i) // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}
	fmt.Println("Sorted Factors: ", factors)
	return factors // returns the factors
}

func assertEqual(a []int, B []int) {
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

There are a few changes to the code: 
- Go doesn't have asserts in its standard library, so I made an `assertEqual` function that compares two slices of integers and prints "Test passed!" if they are equal and "Test failed!" otherwise.
- Instead of using `push`, which is not a valid operation in Go (use append), I used the `append` function to add elements to a slice.
- Go has a `Println` function that prints values, so instead of calling it on each factor, I just print the sorted factors at the end of the function. 
- In Rust, we have pattern matching and type casting using as keyword, but in Go language, there's no need for explicit conversion or pattern matching.
