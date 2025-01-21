package main

import (
	"fmt"
)

func main() {
	// Prepend the string variable with another string literal
	var string = "def"
	string = "abc" + string

	fmt.Println(string) // Output: abcdef
}
