The equivalent Golang code for the above Python function is:

```go
package main

import (
	"fmt"
)

func factor(n int) []int {
	var factors1 []int
	for x := 1; x <= n/2; x++ {
		if n%x == 0 {
			factors1 = append(factors1, x)
		}
	}

	factors1 = append(factors1, n/x)

	factors1 = append(factors1, factors1...)

	return factors1
}

func main() {
	var nums []int = {45, 53, 64}
	for _, i := range nums {
		fmt.Printf("%d: factors: %s\n", i, factor(i))
	}
}
```

In this Go code we have used the `append` function to add elements to a slice, and also made use of the `%v` format specifier in the fmt.Sprintf function which automatically formats values in the same way that printf does. The range for isqrt(n) is reversed because it only goes up to n/2 (as the square root of an integer is always less than or equal to half of its value). This allows the factors of the square root to be included in the output, while still being in ascending order.
