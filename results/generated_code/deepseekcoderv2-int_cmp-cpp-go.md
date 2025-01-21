 Sure, here's the equivalent Go code for the given C++ code:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int

	// Get two integers from the user
	_, err := fmt.Scan(&a, &b)
	if err != nil {
		fmt.Fprintln(os.Stderr, "could not read the numbers")
		return
	}

	// Test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	// Test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	// Test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```

This Go code does the following:
1. Reads two integers from the standard input.
2. Checks if there was an error reading the integers and prints an error message if so.
3. Compares the two integers using the `if` statements to check for less than, equal to, and greater than conditions.
4. Prints a corresponding message based on the comparison result for each condition.
