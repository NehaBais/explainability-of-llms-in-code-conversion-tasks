package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := strings.ToUpper("Bac")

	if a == b {
		fmt.Println("The strings are equal")
	}

	if a != b {
		fmt.Println("The strings are not equal")
	}

	switch {
	case a > b:
		fmt.Println("The first string is lexically after the second")
	case a < b:
		fmt.Println("The first string is lexically before the second")
	default:
		fmt.Println("The strings are neither lexically after nor before each other")
	}

	// case-insensitive comparison

	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
