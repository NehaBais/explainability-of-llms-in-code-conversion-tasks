In Go, the equivalent code would be:

```go
package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Printf("a and b is %t\n", a && b)
	fmt.Printf("a or b is %t\n", a || b)
	fmt.Printf("not a is %t\n", !a)
}

func main() {
	printLogic(true, true)
}
```

This code accomplishes the same task as the original C++ function. The `fmt.Printf` function replaces `std::cout`, and `%t` prints the boolean value. The Go language uses `&&` for logical AND, `||` for logical OR, and `!` for not.
