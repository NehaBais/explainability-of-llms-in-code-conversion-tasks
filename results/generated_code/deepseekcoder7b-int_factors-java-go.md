Here is the equivalent Golang code for your Java method -

```go
package main

import (
	"fmt"
	"math"
)

func factors(n int64) map[int64]bool {
	factors := make(map[int64]bool)
	factors[n] = true
	factors[1] = true
	for test:= n - 1; test >= int64(math.Sqrt(float64(n))); test-- {
		if n%test == 0 {
			factors[test] = true
			factors[n/test] = true
		}
	}
	return factors
}

func main()  {
	fmt.Println(factors(24)) // Use any number you want to calculate the factors for here
}
```
Please note that unlike Java, Go does not have built-in support for sets which is why we use a map where keys are our factors and values determine if a key exists (as it's true in this context). Also notice that as with many things Golang, the type system can get tricky so you might need to adjust based on your exact requirements.

