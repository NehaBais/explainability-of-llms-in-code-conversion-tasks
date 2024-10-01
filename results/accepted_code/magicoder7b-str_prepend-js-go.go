package main

import (
	"fmt"
)

func main() {
	// Initialize string variable s
	s := "Hello"

	// Prepend another string literal to s
	s = fmt.Sprintf("%v%s", ", World", s)

	// Print the result
	fmt.Println(s)
}
