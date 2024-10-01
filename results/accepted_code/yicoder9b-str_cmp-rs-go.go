package main

import (
	"fmt"
	"strings"
)

func main() {
	var a string = "abc"
	var b string = "Bac"

	// Comparing two strings for exact equality
	if a == b {
		fmt.Println("The strings are equal")
	}

	// Comparing two strings for inequality (i.e., the inverse of exact equality)
	if a != b {
		fmt.Println("The strings are not equal")
	}

	// Comparing two strings to see if one is lexically ordered before than the other
	if a < b {
		fmt.Println("The first string is lexically before the second")
	}

	// Comparing two strings to see if one is lexically ordered after than the other
	if a > b {
		fmt.Println("The first string is lexically after the second")
	}

	// Case insensitive comparison
	lowerA := strings.ToLower(a)
	lowerB := strings.ToLower(b)
	if lowerA == lowerB {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
