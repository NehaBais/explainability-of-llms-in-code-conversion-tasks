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
	
	fmt.Printf("a+b = %d\n", a + b)
	fmt.Printf("a-b = %d\n", a - b)
	fmt.Printf("a*b = %d\n", a * b)
	
	if b != 0 {
		fmt.Printf("a/b = %d\n", a / b)
		fmt.Printf("a%%b = %d\n", a % b)
	} else {
		fmt.Println("Cannot divide by zero")
	}
}
```

For the quotient, Go language rounds towards zero when performing integer division.

For remainder, it has the same sign as the first operand (in C99), like in the original code.
