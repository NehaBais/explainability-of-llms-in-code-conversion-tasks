package main

import "fmt"

func main() {
	print_logic(true, false) // Call the function with some boolean values.
}

func print_logic(a bool, b bool) {
	// Now the 'main' function is declared and we can call it.
	fmt.Printf("a and b is %t\n", a && b) // Example usage of the function with some boolean values.
	fmt.Printf("a or b is %t\n", a || b)
	fmt.Printf("not a is %t\n", !a) // Another example usage.
}
