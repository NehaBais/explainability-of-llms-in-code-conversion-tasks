Here's how you can convert this JavaScript code to Golang:
```go
package main

import (
	"fmt"
)

func main() {
	a := 10 // Replace with the first integer input
	b := 5  // Replace with the second integer input

	sum := a + b
	difference := a - b
	product := a * b
	division := a / float64(b)
	remainder := a % b
	exponentiation := float64(a) ** float64(b)

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %.2f\n", division)
	fmt.Printf("a %% b = %d\n", remainder)
	fmt.Printf("a ** b = %.2f\n", exponentiation)

	// Handling sign of remainder
	if a < 0 && b > 0 || a > 0 && b < 0 {
		fmt.Println("Remainder's sign does not match the signs of the operands")
	} else {
		fmt.Println("Remainder's sign matches the sign of the first operand")
	}

	// Handling rounding of quotient
	if division != float64(int(division)) {
		fmt.Println("Quotient rounds towards zero")
	} else if division < 0 && a < 0 || division > 0 && b > 0 {
		fmt.Println("Quotient rounds towards negative infinity")
	}
}
```
Please note that Go doesn't support exponentiation operator "**" like JavaScript, so we're using "float64(a) ** float64(b)" which will result in a floating point number. If you want an integer result, you'll need to use the `math.Pow()` function from the `math` package.
Also, remember that Go doesn't support command line arguments like Node.js does. To run this program, you can replace the values of `a` and `b` with the desired integers.
For rounding behavior, Go's division rounds towards zero by default (for both integer and floating point numbers).
