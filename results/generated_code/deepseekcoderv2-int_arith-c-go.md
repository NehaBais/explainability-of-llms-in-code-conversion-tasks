 Here's the equivalent Go code for the given C code. This Go code will prompt the user to input two integers and then display their sum, difference, product, integer quotient, remainder, and exponentiation if the operator exists.

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integers as command-line arguments.")
		return
	}

	a, err1 := strconv.Atoi(os.Args[1])
	b, err2 := strconv.Atoi(os.Args[2])

	if err1 != nil || err2 != nil {
		fmt.Println("Both arguments must be integers.")
		return
	}

	if b == 0 {
		fmt.Println("Division by zero is not allowed.")
		return
	}

	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)
	fmt.Printf("a/b = %d (truncates towards zero)\n", a/b) // truncates towards zero in Go as well
	fmt.Printf("a%%b = %d (same sign as first operand)\n", a%b) // same sign as first operand in Go
}
```

### Explanation:
1. **Command-line Arguments**: The program expects two command-line arguments, which are then converted to integers using `strconv.Atoi`.
2. **Error Handling**: If the conversion fails or if division by zero is attempted, appropriate error messages are printed and the program exits.
3. **Arithmetic Operations**: The sum, difference, product, integer quotient, and remainder are calculated and printed using standard arithmetic operations in Go.
4. **Remainder Calculation**: The remainder operation follows the same rule as in C: it has the sign of the first operand.

This Go code should behave similarly to the provided C code when run with appropriate command-line arguments.
