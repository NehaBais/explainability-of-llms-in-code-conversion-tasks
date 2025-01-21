The error in the Go code is due to incorrect syntax. In Go, you cannot use curly braces `{}` within a function body without breaking the rule of using curly braces for function bodies. The fix is to remove the curly braces from the append statements in the `factor` function.

Here is the corrected Go code:

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

	return factors1
}

func main() {
	var nums []int = {45, 53, 64}
	for _, i := range nums {
		fmt.Printf("%d: factors: %s\n", i, factor(i))
	}
}
```
