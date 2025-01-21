 Here's the equivalent Go code for the provided Rust code:

```go
package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Println("Please provide two integers as arguments.")
		return
	}

	a, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Println("Invalid integer argument:", os.Args[1])
		return
	}

	b, err := strconv.Atoi(os.Args[2])
	if err != nil {
		fmt.Println("Invalid integer argument:", os.Args[2])
		return
	}

	fmt.Printf("sum:              %d\n", a+b)
	fmt.Printf("difference:       %d\n", a-b)
	fmt.Printf("product:          %d\n", a*b)
	fmt.Printf("integer quotient: %d\n", a/b) // truncates towards zero
	fmt.Printf("remainder:        %d\n", a%b)  // same sign as first operand
}
```

This Go code does the following:
1. Reads two integers from command-line arguments.
2. Calculates and prints their sum, difference, product, integer quotient (truncated towards zero), and remainder (same sign as the first operand).
