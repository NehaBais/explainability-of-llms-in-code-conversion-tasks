package main

import (
	"fmt"
)

// printLogic takes two logical values and prints the results of "and" and "or" on both arguments,
// as well as "not" on the first argument.
func printLogic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	// Example usage
	printLogic(true, true)   // Output: a and b is true
	printLogic(true, false)  // Output: a and b is false
	printLogic(false, true)  // Output: a and b is false
	printLogic(false, false) // Output: a and b is false
}
