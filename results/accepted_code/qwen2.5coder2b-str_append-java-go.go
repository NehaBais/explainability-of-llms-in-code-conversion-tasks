package main

import (
	"fmt"
)

func main() {
	string := "abc"
	fmt.Println(string) // Outputs: abc

	string += "def"     // Using the += operator to append
	fmt.Println(string) // Outputs: abcdef

	// Alternatively, you can use fmt.Sprintf
	string = fmt.Sprintf("%s%s", string, "def")
	fmt.Println(string) // Outputs: abcdef
}
