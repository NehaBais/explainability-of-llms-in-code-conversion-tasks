 Below is the equivalent Go code for your C++ program:

```go
package main

import (
	"fmt"
	"math"
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
Note that division by zero is undefined behavior in both C++ and Go, so this program will crash if you input two numbers where `a` or `b` is zero. You could add error checking to handle such a scenario, but it was not included here for simplicity.
