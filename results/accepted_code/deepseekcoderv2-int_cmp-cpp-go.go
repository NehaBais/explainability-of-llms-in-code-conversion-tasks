package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int

	// Get two integers from the user
	_, err := fmt.Scan(&a, &b)
	if err != nil {
		fmt.Fprintln(os.Stderr, "could not read the numbers")
		return
	}

	// Test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	// Test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	// Test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
