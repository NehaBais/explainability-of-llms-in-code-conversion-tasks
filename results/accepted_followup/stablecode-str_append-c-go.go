package main

import (
	"fmt"
)

func main() {
	// Create a string variable equal to any text value.
	str := "Good Morning"

	// Append the string variable with another string literal in the most idiomatic way.
	str += " to all"
	str += " !!!"

	// Print the contents of the variable after the append operation.
	fmt.Println(str)
}
