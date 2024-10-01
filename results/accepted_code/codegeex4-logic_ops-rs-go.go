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
