Here is the equivalent code in Golang:

```go
package main

import "fmt"

func booleanOps(a bool, b bool) {
	fmt.Printf("%t and %t -> %t\n", A, B, A && B)
	fmt.Printf("%t or %t -> %t\n", A, B, A || B)
	fmt.Printf("%t xor %t -> %t\n", A, B, A != B) // using "!=" for XOR because Go doesn't have a built-in XOR operator
	fmt.Printf("not %t -> %t\n", A, !A)
}

func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
```

Please replace the `A` and `B` with your actual variables in the function call. The `main()` function is called by default in Golang, so you do not need to explicitly specify it when running this program.
