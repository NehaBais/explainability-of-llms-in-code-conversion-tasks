Here is how you can convert this Rust code to Golang:

```go
package main

import (
	"fmt"
	"math"
)

func factor(num int) []int {
	factors := make([]int, 0) // creates a new slice for the factors of the number

	for i := 1; i <= int(math.Sqrt(float64(num)))+1; i++ {
		if num%i == 0 {
			factors = append(factors, i)  // adds smallest factor to factors
			factors = append(factors, num/i) // adds largest factor to factors
		}
	}
	sort.Ints(factors) // sorts the factors into numerical order for viewing purposes
	return factors     // returns the factors
}

func main() {
	fmt.Assert((factor(100)), "Equal", []int{1, 2, 4, 5, 10, 10, 20, 25, 50, 100}, "") // asserts that two expressions are equal to each other
	fmt.Assert((factor(101)), "Equal", []int{1, 101}, "")
}
```

Please note the following:

- The `make([]int, 0)` syntax is used for creating an empty slice in Go as there's no direct equivalent of Rust's `Vec::new()`.
  
- The sorting and getting factors logic stays exactly same.
   
- For testing we use fmt.Assert() function which is available from the `fmt` package in Go, it asserts that two expressions are equal to each other. 

- You will need to add sort import if you have not already added: `import ("sort")`
  
You should take care of error handling when converting from Rust to Golang as there is no direct mapping between both languages for every function/method.
