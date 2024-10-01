package main

import "fmt"

func print_logic(a, b bool) {
	fmt.Printf("a and b is %vn", a && b)
	fmt.Printf("a or b is %vn", a || b)
	fmt.Printf("not a is %vn", !a)
}
func main() {
	print_logic(true, false)
	print_logic(false, true)
	print_logic(false, false)
}
