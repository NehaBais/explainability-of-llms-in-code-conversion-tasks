Here is the equivalent code in Golang:

```go
package main
import (
	"fmt"
)

func Factors(n int) []int {
	factors1 := []int{}
	for x := 1; x*x < n; x++ {
		if n % x == 0 {
			factors1 = append(factors1, x)
			factors1 = append(factors1, n / x)
		}
	}

	return factors1
}

func main() {
	fmt.Printf("%d: factors: %v\n", 45, Factors(45))
	fmt.Printf("%d: factors: %v\n", 53, Factors(53))
	fmt.Printf("%d: factors: %v\n", 64, Factors(64))
}
```
This code computes the factors of a positive integer. For each number less than the square root of n, if it divides evenly into n then it and n divided by that number are both factors.

For each number less than `sqrt(n)`, if the remainder when `n` is divided by `x` is zero (`n % x == 0`) then `x` and `n / x` (the quotient of the division) are both factors. These pairs are added to a slice, which is returned at the end.

The main function calls this for each number in the given list and prints the result. The `printf` function is used to format the string output in Go.
