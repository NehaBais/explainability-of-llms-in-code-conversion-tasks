Sure, here's the equivalent code in Golang:

```go
package main

import "fmt"
import (
	"bufio"
	"os"
)

func main() {
	var a, b int
	reader := bufio.NewReader(os.Stdin)
	fmt.Printf("Enter two numbers:\n")
	if _, err := fmt.Scanf("%d %d", &a, &b); err != nil {
		fmt.Fprintf(os.Stderr, "could not read the numbers\n")
		return
	}
	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
	// test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}
	// test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
```
This code uses the `fmt` package to print and get input from the user. The "scanf" function reads two integers separated by space from the standard input. If any errors occur during this process, it prints an error message and stops execution.
