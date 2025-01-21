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
	}
	if a != b {
		fmt.Println("The strings are not equal")
	}

	if a > b {
		fmt.Println("The first string is lexically after the second")
	}
	if a < b {
		fmt.Println("The first string is lexically before the second")
	}
	if a >= b {
		fmt.Println("The first string is not lexically before the second")
	}
	if a <= b {
		fmt.Println("The first string is not lexically after the second")
	}

	// Case insensitive comparison
	a2 := strings.ToUpper(a)
	b2 := strings.ToUpper(b)

	if a2 == b2 {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
