package main

import (
		"fmt"
		"os"
	)

func main() {
	var a, b int

	// Read two integers from user input.
	_, err := fmt.Scanf("%d %d", &a, &b))
	if err != nil {
		fmt.Println("Error reading inputs:", err)
		os.Exit(1)
	}

	// Display the sum, difference, product, integer quotient and remainder of two given integers.
	fmt.Printf("\nFor a = %d and b = %d:\n", a, b))
	fmt.Printf("a+b = %d\n", a+b))
	fmt.Printf("a-b = %d\n", a-b))
	fmt.Printf("a*b = %d\n", a*b))

	// Calculate and display the integer quotient (rounded towards zero)) and remainder of two given integers.
	quotient := a / b  // Integer division in Go automatically rounds towards zero.
	remainder := a % b  // The remainder operator (%) gives the remainder of the division operation.

	fmt.Printf("\nFor a = %d and b = %d:\n", a, b))
	fmt.Printf("a/b = %d\n", quotient))
	fmt.Printf("a%b = %d\n", remainder))
}