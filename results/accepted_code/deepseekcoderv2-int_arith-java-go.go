package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b) // Read two integers from standard input

	sum := a + b
	difference := a - b
	product := a * b
	// For integer division in Go, the result is always truncated towards zero
	division := a / b
	// The remainder operation returns the same sign as the first operand
	remainder := a % b

	fmt.Println("a + b =", sum)
	fmt.Println("a - b =", difference)
	fmt.Println("a * b =", product)
	fmt.Println("quotient of a / b =", division)   // Truncates towards zero
	fmt.Println("remainder of a / b =", remainder) // Same sign as first operand
}
