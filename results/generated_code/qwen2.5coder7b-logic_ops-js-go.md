Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func logic(a, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, false)
}
```

This Golang program defines the function `logic` which takes two boolean parameters and outputs the results of "and", "or" operations on both arguments as well as "not" operation on the first argument. The `main` function calls the `logic` function with some sample inputs (`true, false`).
