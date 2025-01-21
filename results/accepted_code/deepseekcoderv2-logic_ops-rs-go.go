package main

import "fmt"

// booleanOps takes two boolean values and prints the results of "and", "or", and "not" operations on them.
func booleanOps(a, b bool) {
	fmt.Printf("%t and %t -> %t\n", a, b, a && b)
	fmt.Printf("%t or %t -> %t\n", a, b, a || b)
	fmt.Printf("%t xor %t -> %t\n", a, b, a != b) // In Go, the XOR operation is not directly supported by boolean operators, so we use != for it.
	fmt.Printf("not %t -> %t\n", a, !a)
}

func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
