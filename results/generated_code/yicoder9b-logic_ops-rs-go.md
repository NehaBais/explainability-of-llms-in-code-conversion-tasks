Here is the equivalent Golang code for your Rust function: 

```go
package main

import (
	"fmt"
)

func booleanOps(a bool, b bool) {
    fmt.Printf("%t and %t -> %t\n", a, b, a && b)
    fmt.Printf("%t or %t -> %t\n", a, b, a || b)
	// Go does not have an `xor` operator for booleans like Rust.
	// However you can simulate it using the logic that "a xor b" is equivalent to "(a and !b) or (!a and b)"
    fmt.Printf("%t xor %t -> %t\n", a, b, (a && !b) || (!a && b))
	// Go also doesn't support the `not` operator for boolean in place of `!`. So we use `!` again.
    fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
    booleanOps(true, true)
    booleanOps(true, false)
    booleanOps(false, true)
    booleanOps(false, false)
}
```
