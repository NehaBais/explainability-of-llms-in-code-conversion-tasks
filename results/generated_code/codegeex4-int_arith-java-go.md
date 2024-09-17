```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Print("Enter first integer: ")
	fmt.Scan(&a)
	fmt.Print("Enter second integer: ")
	fmt.Scan(&b)

	sum := a + b         // The result of adding 'a' and 'b'
	difference := a - b  // The result of subtracting 'b' from 'a'
	product := a * b     // The result of multiplying 'a' and 'b'
	quotient := a / b    // The result of dividing 'a' by 'b' (Note: quotient truncates towards zero)
	remainder := a % b   // Remainder matches the sign of the first operand

	fmt.Println("Sum:", sum)
	fmt.Println("Difference:", difference)
	fmt.Println("Product:", product)
	fmt.Printf("Quotient: %.0f\n", float64(quotient))  // Prints the quotient as float (integer division in Go truncates towards zero)
	fmt.Println("Remainder:", remainder)
}
```

Note:
- The "division" operation in Golang returns an integer value and it doesn't have an option for rounding towards negative infinity. So, we need to convert our divisor into a float before performing the division if you want to get the result with decimal places.
- In Go, "%" operator returns the remainder of the floating-point division (not integer division). For example 10%3 will return 1.
- The sign of the remainder is always the same as that of the first operand.
- This program doesn't handle errors because it's not specified in the problem statement. If you want to add error handling, you need to import "fmt" package for input formatting and "strconv" for conversion of string inputs into integers.
