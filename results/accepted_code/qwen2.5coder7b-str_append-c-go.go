package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	// In Go, we use + operator to concatenate strings.
	str += cstr
	x := len(str)

	// We can use fmt.Sprintf to format the string. However, in this case,
	// as we are appending a constant string, simple concatenation will work fine.
	str += cstr2

	fmt.Println(str)
}
