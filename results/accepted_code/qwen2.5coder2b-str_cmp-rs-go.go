package main

import (
	"strings"
)

func main() {
	// only same types can be compared
	a := "abc" // string
	b := "Bac" // string

	// Strings are coerced to []byte when borrowed and needed
	if strings.EqualFold(a, b) { // equality ignoring case
		println("The strings are equal")
	}

	// everything else, create []byte, then compare as above
	a2 := []byte(a)
	b2 := []byte(b)

	// repeat checks

}
