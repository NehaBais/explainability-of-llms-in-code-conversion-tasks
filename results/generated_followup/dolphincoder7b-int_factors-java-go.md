The error occurs because the "sorts" package is not imported into your Go program. To fix this, replace the line "import (  \"math\"  \"sorts\")" with "import (  \"math\"  \"sorts\"  \"container/heap\")".

Once you import all required packages, the code should compile without any errors.

The corrected version of the Go function is as follows:
```go
package main

import  (
		"fmt"
		"math"
		"sorts"
		"container/heap"
)

func Factors(n int64) []int64 {
	factors := make([]int64, 0, 2)
	factors = append(factors, n)
	factors = append(factors, 1)
	for test := n - 1; test >= math.Sqrt(float64(n)); test--  {
		if n%test == 0 {
			factors = append(factors, test)
			factors = append(factors, n/test)
		}
	}
	sorts.Ints(factors)
	return factors
}
```
