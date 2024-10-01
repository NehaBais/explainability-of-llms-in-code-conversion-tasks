package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!!"

	// Concatenating two strings with '+' operator.
	newStr := str + cstr + cstr2
	fmt.Println(newStr)
}
