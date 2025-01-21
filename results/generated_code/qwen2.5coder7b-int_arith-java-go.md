Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Println("a + b =", sum)
	fmt.Println("a - b =", difference)
	fmt.Println("a * b =", product)
	fmt.Printf("quotient of a / b = %d (truncates towards 0)\n", division)
	fmt.Printf("remainder of a / b = %d (same sign as first operand)\n", remainder)
}
```

This code will read two integers from the user, calculate and display their sum, difference, product, quotient, and remainder. The division and remainder operations use integer arithmetic as per the Go language specification, so there is no fractional part in the result of a / b and the sign of the remainder matches the sign of the first operand if they are different (this matches the behavior described for the Java code).
