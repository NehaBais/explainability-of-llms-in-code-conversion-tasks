package main

import "strings"

func main() {
	a := "abc"
	b := "Bac"

	// Exact equality
	if a == b {
		println("The strings are equal")
	}

	// Inequality
	if a != b {
		println("The strings are not equal")
	}

	// Lexicographical comparison
	if strings.Compare(a, b) > 0 {
		println("The first string is lexically after the second")
	}
	if strings.Compare(a, b) < 0 {
		println("The first string is lexically before the second")
	}

	// Case-sensitive comparison
	if strings.Compare(a, b) == 0 {
		println("The strings are equal")
	}

	// Case-insensitive comparison
	if strings.EqualFold(a, b) {
		println("The strings are equal when ignoring case")
	}

	// Numeric string comparison
	c := "123"
	d := "456"
	if strings.Compare(c, d) < 0 {
		println("The first string is numerically smaller")
	}
}
