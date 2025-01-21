To convert the given Java code to Golang, you can follow these steps:

1. Import necessary packages.
2. Define a function in Go that computes the factors of a positive integer.
3. Use loops and conditional statements to find all factors.
4. Return the factors as a slice of long integers.

Here is the equivalent Golang code:

```go
package main

import (
	"fmt"
	"math"
)

func factors(n int) []int {
	factors := make([]int, 0)
	for i := 1; i <= n/2; i++ {
		if n%i == 0 {
			factors = append(factors, i)
			if i != n/i {
				factors = append(factors, n/i)
			}
		}
	}
	return factors
}

func main() {
	n := 100 // Example input
	fmt.Println("Factors of", n, ":", factors(n))
}
```

Explanation:
- We use a `for` loop to iterate from 1 to the square root of `n` (inclusive).
- For each iteration, we check if `n` is divisible by the current number (`i`).
- If it is, we add both `i` and `n/i` to the slice of factors.
- We use the `append` function to add elements to the slice.
- Finally, in the `main` function, we call the `factors` function with an example input and print the results.
