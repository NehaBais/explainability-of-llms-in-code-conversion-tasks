package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	// Append the strings together in a idiomatic way
	str += cstr + cstr2

	fmt.Println(str)
}
