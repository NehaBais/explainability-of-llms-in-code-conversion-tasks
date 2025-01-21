 The error occurred because the "math" package was imported but not used, so it is unnecessary to import it at all.

Here's how to fix the issue:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	_, _ = fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b

	quotient := float64(a) / float64(b)
	remainder := a % b

	fmt.Printf("a+b = %d\n", sum)
	fmt.Printf("a-b = %d\n", difference)
	fmt.Printf("a*b = %d\n", product)
	fmt.Printf("a/b = %.0f, remainder %d\n", quotient, remainder)
}
```
In this corrected code, we only import `fmt`, which is the standard library package for formatted I/O operations in Go. 

We didn't use "math" package, but if you want to use it, remember that its functions are generally used with floating point numbers and not integers. In case of integer division, you don't need to import math package because the quotient and remainder calculations will be performed natively by Go without requiring an explicit import.
