Here is the equivalent code in Golang:

```go
package main

import "fmt"

func booleanOps(a bool, b bool) {
	fmt.Printf("%t and %t -> %t\n", a, b, a && b)
	fmt.Printf("%t or %t -> %t\n", a, b, a || b)
	fmt.Printf("%t xor %t -> %t\n", a, b, a != b)
	fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
```

In Golang, `&&` and `||` are the logical AND and OR operators respectively. The `^` operator is used for bitwise XOR, so to get the boolean equivalent of exclusive or (`xor`) in Golang we use `!=`. Also, `%t` is used to format booleans in a Go string.
