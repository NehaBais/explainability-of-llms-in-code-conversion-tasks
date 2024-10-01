package main

import (
	"fmt"
	"strings"
)

func main() {
	a := "abc"
	b := "Bac"

	if strings.EqualFold(a, b) {
		fmt.Println("The strings are equal")
	} else {
		fmt.Println("The strings are not equal")
	}

	if strings.Compare(a, b) > 0 {
		fmt.Println("The first string is lexically after the second")
	} else if strings.Compare(a, b) < 0 {
		fmt.Println("The first string is lexically before the second")
	}
}
