The equivalent Golang code would look like this:

```go
package main

import (
	"fmt"
)

func printLogic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	printLogic(true, true)
	printLogic(false, false)
	printLogic(true, false)
}
```

Please note that the `fmt.Printf` function in Golang uses `%v` to print variables of any type (including boolean) as their corresponding string representation.
