Here's the equivalent code in Golang:

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
In Golang, you need to explicitly declare the type of variables (in this case `int`). The `fmt.Scan` function reads from standard input and stores the input value into the variable. For comparison, we use `if`, `else if` and `else` just like in Python.
