package main

import (
	"fmt"
)

// Function to compare two integers
func compare(a int, b int) {
	if a == b {
		fmt.Println(a, "equals", b)
	}
	if a < b {
		fmt.Println(a, "is less than", b)
	}
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}

func main() {
	// Test the function with various inputs to ensure it works as expected
	compare(5, 10)
	compare(20, 10)
	compare(15, 15)
}
