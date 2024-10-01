package main

import "fmt"

func booleanOps(a, b bool) {
	fmt.Printf("%v and %v -> %v\n", a, b, a && b)
	fmt.Printf("%v or %v -> %v\n", a, b, a || b)
	fmt.Printf("%v xor %v -> %v\n", a, b, a^b)
	fmt.Printf("not %v -> %v\n", a, !a)
}
func main() {
	booleanOps(true, true)
	booleanOps(true, false)
	booleanOps(false, true)
	booleanOps(false, false)
}
