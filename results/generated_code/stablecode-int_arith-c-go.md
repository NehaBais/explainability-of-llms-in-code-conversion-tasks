Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	a, b := getInput()

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b // integer division in Go rounds towards zero
	remainder := a % b // remainder sign matches the first operand
	exponentiation := 1 << uint(b) // exponentiation is done using bitwise operators

	fmt.Printf("a+b = %d\n", sum)
	fmt.Printf("a-b = %d\n", difference))
	fmt.Printf("a*b = %d\n", product))
	fmt.Printf("a/b (integer division with rounding towards zero) = %d\n", quotient))
	fmt.Printf("a%%b (remainder sign matching the first operand) = %d\n", remainder))
	fmt.Printf("a ^ b (exponentiation) = %d\n", exponentiation))
}

func getInput() (int, int) {
	var a, b int

	_, err := fmt.Scan(&a, &b))
	if err != nil {
		panic(err)
	}

	return a, b
}
```
This Go code does the same thing as the original C code: it takes two integers from the user and then calculates their sum, difference, product, integer quotient, remainder, and exponentiation (if applicable). 

The main differences between this Go code and the original C code are:
- The use of `fmt` package for reading input and printing output.
- The absence of error handling in the original C code, which has been implemented with panic handlers in the Go code.
- The integer division rounding in Go defaults towards zero (towards negative infinity in older versions of C). This behavior is reflected in the comments of the Go code.
- The remainder sign matching the first operand is consistent with older versions of C where `a%b` returns a value with the same sign as `a`. In the comments of the Go code, this behavior is explained and mentioned explicitly for clarity.
