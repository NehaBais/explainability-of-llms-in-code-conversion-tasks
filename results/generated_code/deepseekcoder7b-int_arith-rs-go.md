In Go, you can use the `fmt.Scanf` to get input from user and then perform your operations on them.
Here's how it might look like in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
    fmt.Scanf("%d %d", &a, &b)   // read input from user
    
    sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b        // Truncates towards zero
	remainder := a % b       // Remainder is same sign as the first operand
    
	fmt.Printf("sum:              %d\n", sum)
    fmt.Printf("difference:       %d\n", difference)
    fmt.Printf("product:          %d\n", product)
    fmt.Printf("integer quotient: %d (truncates towards zero)\n", quotient)
	fmt.Printf("remainder:        %d (same sign as first operand)\n", remainder)
}
```
In Go, the division `/` operator performs integer division when both operands are integers and gives a float result in all other cases. It truncates towards zero, which means it rounds down to nearest whole number if the decimal part is .5 or above. The remainder operation `%` returns the remainder of integer division (not floating point). In case where denominator is zero, Go does not provide an explicit exception for this as in Rust.

