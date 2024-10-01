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
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
