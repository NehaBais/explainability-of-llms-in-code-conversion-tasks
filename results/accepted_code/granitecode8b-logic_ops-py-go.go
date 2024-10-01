package main

import "fmt"

func logic(a, b bool) {
	fmt.Printf("a and b: %t and %t is %tn", a, b, a && b)
	fmt.Printf("a or b: %t or %t is %tnn", a, b, a || b)
	fmt.Printf("not a: not %t is %t", a, !a)
}
func main() {
	logic(true, false)
	logic(false, true)
	logic(true, true)
	logic(false, false)
}
