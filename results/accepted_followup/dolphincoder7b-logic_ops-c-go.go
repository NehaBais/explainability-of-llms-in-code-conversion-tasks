package main

import "fmt"

func print_logic(a int, b int) {
	fmt.Printf("a and b is %d\n", a&b)
	fmt.Printf("a or b is %d\n", a|b)
	fmt.Printf("not a is %d\n", ^a)
}
func main() {
	// Test
	print_logic(1, 0)
	print_logic(0, 1)
	print_logic(1, 1)
	print_logic(0, 0)
}
