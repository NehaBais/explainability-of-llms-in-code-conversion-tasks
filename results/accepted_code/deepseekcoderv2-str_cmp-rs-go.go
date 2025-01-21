package main

import (
	"fmt"
	"strings"
)

func main() {
	// only same types can be compared
	// string and string or string and *string
	// exception: strict equality and inequality also work on string and *string
	a := "abc"
	b := "Bac"

	// Strings are coerced to string when needed
	if a == b {
		fmt.Println("The strings are equal")
	}
	if a != b {
		fmt.Println("The strings are not equal")
	}
	if strings.Compare(a, b) > 0 {
		fmt.Println("The first string is lexically after the second")
	}
	if strings.Compare(a, b) < 0 {
		fmt.Println("The first string is lexically before the second")
	}
	if strings.Compare(a, b) >= 0 {
		fmt.Println("The first string is not lexically before the second")
	}
	if strings.Compare(a, b) <= 0 {
		fmt.Println("The first string is not lexically after the second")
	}

	// case-insensitives:

	// equality
	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}

	// everything else, create new strings, then compare as above
	a2 := strings.ToUpper(a)
	b2 := strings.ToUpper(b)

	// repeat checks
}
