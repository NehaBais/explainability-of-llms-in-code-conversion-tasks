package main

import (
	"fmt"
)

func main() {
	// Create a string variable equal to any text value.
	stringVar := "def"

	// Prepend the string variable with another string literal.
	stringVar = "abc" + stringVar

	// Print the result
	fmt.Println(stringVar)
}
