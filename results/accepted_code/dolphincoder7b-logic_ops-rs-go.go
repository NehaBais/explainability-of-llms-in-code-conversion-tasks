package main

import "fmt"

func boolean_ops(a bool, b bool) {
	fmt.Printf("%v and %v -> %v\n", a, b, a && b)
	fmt.Printf("%v or %v -> %v\n", a, b, a || b)
	fmt.Printf("%v xor %v -> %v\n", a, b, a^b)
	fmt.Printf("not %v -> %v\n", a, !a)
}
func main() {
	boolean_ops(true, true)
	boolean_ops(true, false)
	boolean_ops(false, true)
	boolean_ops(false, false)
}
