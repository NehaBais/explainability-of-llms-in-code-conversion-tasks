package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int

	// Get the 2 numbers from command line arguments
	fmt.Scanf("%d%d", &a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	quotient := float64(a) / float64(b) // will perform division as per Go language specification for floating point numbers
	remainder := a % b

	fmt.Println("a + b =", sum))
	fmt.Println("a - b =", difference))
	fmt.Println("a * b =", product))
	fmt.Println("quotient of a / b = ", quotient)) // will perform division as per Go language specification for floating point numbers
	fmt.Println("remainder of a / b = ", remainder)) // same sign as first operand
}