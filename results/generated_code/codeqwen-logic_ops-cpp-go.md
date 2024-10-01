Here's the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func printLogic(A bool, b bool) {
	fmt.Printf("A and b is %t\n", A && b)
	fmt.Printf("A or b is %t\n", A || b)
	fmt.Printf("not a is %t\n", !A)
}

func main() {
	printLogic(true, false)
}
```

In the above Golang code, we're using `fmt.Printf` to print the results of the "and", "or" and "not" operations on the boolean variables A and B. We also use `%t` as a placeholder for bool values in `fmt.Printf`. The `%t` operator represents a Boolean value, and if you want the result of "true" or "false" instead of 0 or 1, you need to use `%t`.
