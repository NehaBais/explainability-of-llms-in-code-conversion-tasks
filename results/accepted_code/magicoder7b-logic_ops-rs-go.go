package main

import (
	"fmt"
)

func booleanOps(a bool, b bool) {
	and := a && b
	or := a || b
	xor := a != b
	notA := !a

	fmt.Printf("%t and %t -> %t\n", a, b, and)
	fmt.Printf("%t or %t -> %t\n", a, b, or)
	fmt.Printf("%t xor %t -> %t\n", a, b, xor)
	fmt.Printf("not %t -> %t\n", a, notA)
}

func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
