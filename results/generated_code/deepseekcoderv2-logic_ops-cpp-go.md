 Sure, here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func printLogic(a, b bool) {
	fmt.Printf("a and b is %t\n", a && b)
	fmt.Printf("a or b is %t\n", a || b)
	fmt.Printf("not a is %t\n", !a)
}

func main() {
	printLogic(true, true)
	printLogic(true, false)
	printLogic(false, true)
	printLogic(false, false)
}
```

This Go code defines a function `printLogic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them. The `fmt.Printf` function is used to format the output with `%t` which formats booleans as `true` or `false`. The `main` function demonstrates how to call `printLogic` with different boolean values.
