package main

import (
	"fmt"
	"strings"
)

func compareStrings(a, b string) {
	// Case-sensitive equality
	if a == b {
		fmt.Println("Exact equality")
	} else {
		fmt.Println("Not exact equality")
	}

	// Case-sensitive inequality
	if a != b {
		fmt.Println("Case-sensitive inequality")
	} else {
		fmt.Println("No case-sensitive inequality")
	}

	// Lexicographical comparison
	if a < b {
		fmt.Println("a is lexicographically before b")
	} else {
		fmt.Println("b is lexicographically before a")
	}

	// Lexicographical comparison in reverse order
	if a > b {
		fmt.Println("a is lexicographically after b")
	} else {
		fmt.Println("b is lexicographically after a")
	}

	// Case-insensitive comparison
	if strings.EqualFold(a, b) {
		fmt.Println("Case-insensitive equality")
	} else {
		fmt.Println("No case-insensitive equality")
	}

	// Numeric comparison
	numA, _ := strconv.ParseFloat(a, 64)
	numB, _ := strconv.ParseFloat(b, 64)
	if numA == numB {
		fmt.Println("Numeric equality")
	} else {
		fmt.Println("Not numeric equality")
	}
}

func main() {
	a := "hello"
	b := "world"

	compareStrings(a, b)
}
