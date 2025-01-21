Sure, here is the equivalent code in Go:

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Printf("a AND b: %v\n", a && b)
	fmt.Printf("a OR b: %v\n", a || b)
	fmt.Printf("NOT a: %v\n", !a)
}

func main() {
	logic(true, true)
	logic(false, false)
	logic(true, false)
	logic(false, true)
}
```

This code does the same thing as your JavaScript function. It prints out the results of "and" and "or" on both arguments as well as "not" on the first argument. When you run this program, it will output:

a AND b: true
a OR b: true
NOT a: false
a AND b: false
a OR b: true
NOT a: true
