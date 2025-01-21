package main

import "fmt"

// logic takes two boolean arguments and performs logical operations.
func logic(a, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, true)   // Example usage
	logic(true, false)  // Example usage
	logic(false, true)  // Example usage
	logic(false, false) // Example usage
}
