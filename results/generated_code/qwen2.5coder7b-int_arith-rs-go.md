Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scanf("%d %d", &a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b
	remainder := a % b

	fmt.Printf("Sum:\t\t%d\n", sum)
	fmt.Printf("Difference:\t%d\n", difference)
	fmt.Printf("Product:\t%d\n", product)
	fmt.Printf("Integer Quotient:\t%d\n", quotient) // rounds towards zero
	fmt.Printf("Remainder:\t%d\n", remainder)    // same sign as first operand
}
```
Please note that Golang doesn't support error handling in a way like Rust, and it also does not have native support for converting arguments from the command line into numbers. So this program asks for input directly from the terminal.
