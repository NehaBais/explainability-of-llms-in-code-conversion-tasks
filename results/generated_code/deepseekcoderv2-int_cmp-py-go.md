 Here's the equivalent Go code for the given Python script, which takes two integers from the user and compares them using if-else conditions:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter value of a: ")
	fmt.Scan(&a)
	fmt.Print("Enter value of b: ")
	fmt.Scan(&b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else {
		fmt.Println("a is equal to b")
	}
}
```

This Go code does the following:
1. Imports the `fmt` package for input and output operations.
2. Declares two integer variables, `a` and `b`.
3. Prompts the user to enter values for `a` and `b`.
4. Uses if-else conditions to compare the values of `a` and `b` and prints the appropriate message based on the comparison result.
