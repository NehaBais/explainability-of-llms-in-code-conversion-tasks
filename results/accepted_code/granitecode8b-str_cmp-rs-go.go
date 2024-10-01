package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := "Bac"
	// exact equality
	if a == b {
		fmt.Println("The strings are equal")
	}
	// inequality
	if a != b {
		fmt.Println("The strings are not equal")
	}
	// lexically ordered before than
	if a < b {
		fmt.Println("The first string is lexically before the second")
	}
	// lexically ordered after than
	if a > b {
		fmt.Println("The first string is lexically after the second")
	}
	// case-insensitive equality
	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
