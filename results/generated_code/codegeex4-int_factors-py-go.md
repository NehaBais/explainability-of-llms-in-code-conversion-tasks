Below is the Go equivalent of your Python code:

```go
package main

import (
	"fmt"
	"math"
)

func factor(n int) []int {
	factors1 := make([]int, 0)
	factors2 := make([]int, 0)
	for x := 1; x <= int(math.Sqrt(float64(n))); x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
			factors2 = append(factors2, n/x)
		}
	}

	factors1 = append(factors1, factors2...)
	for i, j := 0, len(factors1)-1; i < j; i, j = i+1, j-1 {
		factors1[i], factors1[j] = factors1[j], factors1[i]
	}
	return factors1
}

func main() {
	for _, val := range []int{45, 53, 64} {
		fmt.Printf("%d: Factors: %v\n", val, factor(val))
	}
}
```

In this Go version of the code:

- The Python `isqrt(n)` method is replaced by taking the integer part of `math.Sqrt(float64(n))`.
- Since Go does not have a built-in method to reverse slices like Python's `reversed()`, we manually swap elements from both ends towards the center using the for loop.
- The range for loop syntax in Golang is slightly different than in Python. In this case, it iterates over each integer value in the slice passed to it (which in this case is `[45, 53, 64]`).
- `%v` format specifier is used in `Printf` instead of `%s`, which is used for string formatting.
- The `append()` function is used to add elements to slices. Note that the return value of `append()` must be assigned back to the slice variable, because `append()` returns a new slice with modified contents. 
- Finally, the `fmt.Printf` method in Go has an exact equivalent to Python's `print()` method and `%i` or `%d` is used instead of `%i`.
