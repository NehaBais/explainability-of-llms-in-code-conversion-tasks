Sure, here's the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func main() {
	var a, b float64
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

This code prompts the user for two floating point numbers and then compares them using the `<`, `>`, and `==` operators. Depending on the outcome, it prints a message indicating whether `a` is less than, greater than or equal to `b`.
