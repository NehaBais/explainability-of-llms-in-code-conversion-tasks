package main

import "fmt"

func main() {
	// Get the two numbers from command line arguments
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

	// Compute results
	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b  // Truncates towards 0
	remainder := a % b // Same sign as first operand

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("quotient of a / b = %d\n", quotient)   // Truncates towards 0
	fmt.Printf("remainder of a / b = %d\n", remainder) // Same sign as first operand
}
