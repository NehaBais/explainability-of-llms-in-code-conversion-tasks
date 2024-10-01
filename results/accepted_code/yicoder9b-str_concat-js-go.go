package main

import (
	"fmt"
)

func main() {
	// Create a string variable equal to any text value.
	var s = "hello"

	// Create another string variable whose value is the original
	// variable concatenated with another string literal.
	var sConcat = s + " there!"

	// Print out the content of the variables.
	fmt.Println(s)
	fmt.Println(sConcat)
}
