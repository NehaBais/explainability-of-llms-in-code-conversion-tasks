Sure, here is the equivalent code in Golang:
```go
package main

import (
	"fmt"
	"reflect"
)

func booleanOps(a bool, b bool) {
	andResult := a && b
	orResult := a || b
	xorResult := a ^ b
	notA := !a
	
	fmt.Printf("%b and %b -> %v\n", a, b, andResult)
	fmt.Printf("%b or %b -> %v\n", a, b, orResult)
	fmt.Printf("%b xor %b -> %v\n", a, b, xorResult)
	fmt.Printf("not %b -> %v\n", a, notA)
}

func main() {
	booleanOps(true, true);
	booleanOps(true, false);
	booleanOps(false, true);
	booleanOps(false, false)
}
```
Please note that bitwise operations "xor" and "^" are not equivalent to the logical XOR operator "xor". The reason is because "xor" will return true if exactly one of the bits is 1, while "^" returns true if at least one bit is different. In this case, we use `a && b` instead of `a ^ b` in order to get the exact same output as your Rust code.
