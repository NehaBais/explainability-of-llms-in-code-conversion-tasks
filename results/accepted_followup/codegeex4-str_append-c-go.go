package main

import (
	"fmt"
)

func main() {
	str := "Good Morning" // Create a string variable equal to any text value.
	cstr := " to all"
	cstr2 := " !!!"

	if len(str)+len(cstr)+len(cstr2) <= len(str) {
		str = str + cstr // Append the string variable with another string literal in the most idiomatic way.

		// Alternative method using concatenation
		str += cstr2

		fmt.Println(str) // Show the contents of the variable after the append operation.
	}
}
