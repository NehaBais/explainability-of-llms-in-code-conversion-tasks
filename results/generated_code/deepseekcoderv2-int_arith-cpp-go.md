 Sure, here is the equivalent Golang code for the given C++ code:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println("a+b =", a+b)
	fmt.Println("a-b =", a-b)
	fmt.Println("a*b =", a*b)
	if b != 0 {
		fmt.Println("a/b =", a/b, ", remainder", a%b)
	} else {
		fmt.Println("a/b = undefined (division by zero)")
	}
}
```

This Golang code reads two integers from the user, performs the required arithmetic operations, and prints the results in a similar format to the C++ code provided. Note that for the quotient and remainder, it follows the behavior specified:
- For the quotient, it uses integer division which rounds towards zero.
- For the remainder, it uses the `%` operator which returns the result with the sign of the first operand if they are different.
