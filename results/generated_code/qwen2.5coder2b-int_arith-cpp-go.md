Sure, here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)
	
	sum := a + b
	diff := a - b
	product := a * b
	quotient := a / b
	remainder := a % b

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", diff)
	fmt.Printf("Product: %d\n", product)
	fmt.Printf("Quotient: %d, Remainder: %d\n", quotient, remainder)

	if a*b < 0 {
		fmt.Printf("Exponentiation: %d^%d = %d\n", a, b, a*b)
	}
}
```

The code above gets two integers from the user using `fmt.Scan`, performs the required calculations using basic arithmetic operators (`+`, `-`, `*`, `/`), and finally outputs the results. It uses integer division for quotient and modulus operator for remainder.

For exponentiation (`a^b`), it is only calculated if both operands have different signs. This follows the same logic as in the original C++ code, which used conditional statements to check the sign of `a*b`.
