package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := "Bac"

	if a == b {
		fmt.Println("The strings are equal")
	} else if a != b {
		fmt.Println("The strings are not equal")
	}

	if strings.Compare(a, b) < 0 {
		fmt.Println("The first string is lexically after the second")
	} else if strings.Compare(a, b) > 0 {
		fmt.Println("The first string is lexically before the second")
	}

	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}

	// You can use built-in functions to check string comparison conditions:
	// - strings.Compare(s1, s2) < 0 if s1 is lexically ordered before s2.
	// - strings.Compare(s1, s2) > 0 if s1 is lexically ordered after s2.
	// - strings.EqualFold(s1, s2) returns true if both strings are equal when ignoring case.

	// Case-insensitive comparisons:
	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
