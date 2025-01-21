package main

import (
	"fmt"
)

func main() {
	// Create a string variable equal to any text value.
	s := ", World"

	// Prepend the string variable with another string literal.
	s = "Hello" + s

	// Print the result.
	fmt.Println(s)
}
