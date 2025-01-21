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

	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
