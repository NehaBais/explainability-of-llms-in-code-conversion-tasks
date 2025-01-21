The error occurred because the `os` package is imported but not used anywhere in the code. The `os` package provides functions for working with operating systems, but since we are not using any of its functions, the compiler raises an error.

To fix the issue, we need to remove the import statement for `os`. Here's the corrected code:
```go
package main

import "fmt"

func main() {
	var a, b int
	fmt.Print("Enter value of a: ")
	fmt.Scanf("%d", &a)
	fmt.Print("Enter value of b: ")
	fmt.Scanf("%d", &b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a == b {
		fmt.Println("a is equal to b")
	} else {
		fmt.Println("a is greater than b")
	}
}
```
