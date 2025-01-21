package main

import (
	"strings"
)

func main() {
	a := "abc" // string
	b := "Bac" // string

	if strings.EqualFold(a, b) { // equality ignoring case
		println("The strings are equal")
	}

	// everything else
}
