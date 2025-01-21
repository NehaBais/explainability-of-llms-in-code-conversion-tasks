 Here's the equivalent Go code for the given C code:

```go
package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```

This Go code does the following:
1. Takes two integers from the user input.
2. Compares them using `if` statements to check if one integer is less than, equal to, or greater than the other.
3. Prints out the appropriate message based on the comparison result.
