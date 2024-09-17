Here's how you can convert the Python code to Golang. 

```go
package main

import (
	"fmt"
)

func main() {
	var a int
	var b int

	fmt.Print("Enter value of a: ")
	fmt.Scan(&a)

	fmt.Print("Enter value of b: ")
	fmt.Scan(&b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else if a == b {
		fmt.Println("a is equal to b")
	}
}
```

This Go code performs the same operations as the Python code: It prompts the user for two integer inputs, `a` and `b`. Then, based on whether `a` is less than, equal to, or greater than `b`, it prints out the appropriate message.
