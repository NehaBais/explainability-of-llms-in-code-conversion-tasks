package main

import "fmt"

func main() {
	// Create a string variable equal to any text value
	var s string = "World"

	// Prepend the string variable with another string literal
	s = "Hello " + s

	// Print the resulting string
	fmt.Println(s)
}
