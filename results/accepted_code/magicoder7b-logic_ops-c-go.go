package main

import (
	"fmt"
)

func print_logic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	// For example, you can call the function with true and false values like this:
	print_logic(true, false)
}
