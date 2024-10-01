```go
package main

import "fmt"

func booleanOps(a bool, b bool) {
	fmt.Printf("%t and %t -> %t\n", a, b, a && b)
	fmt.Printf("%t or %t -> %t\n", a, b, a || b)
}

func not(a bool) {
	fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	not(true)
}
```
In the provided Rust code, the `xor` operation is not included in the output. In Go, there's no built-in operator for XOR, so it was omitted from the translation. Similarly, we don't need to call `not()` function with two arguments, because that's a bit redundant; instead we can just call `not(a)` directly.
