package main

import (
	"fmt"
)

func boolOps(a, b bool) {
	fmt.Printf("%v and %v -> %v\n", a, b, a && b)
	fmt.Printf("%v or %v -> %v\n", a, b, a || b)
	fmt.Printf("%v xor %v -> %v\n", a, b, a != b)
	fmt.Printf("not %v -> %v\n", a, !a)
}

func main() {
	boolOps(true, true)
	boolOps(true, false)
	boolOps(false, true)
	boolOps(false, false)
}
