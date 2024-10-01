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
