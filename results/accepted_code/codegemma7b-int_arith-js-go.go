package main

import "fmt"

func main() {
	// Get two integers from the user
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

	// Calculate the required values
	sum := a + b
	difference := a - b
	product := a * b
	division := float64(a) / float64(b) // Divide as float64 to handle integer division
	remainder := a % b

	// Print the results
	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %.2f\n", division) // Round division to two decimal places
	fmt.Printf("a %% b = %d\n", remainder) // Use %% to escape the % symbol
}
