package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Print("Enter first integer: ")
	fmt.Scan(&a)
	fmt.Print("Enter second integer: ")
	fmt.Scan(&b)

	sum := a + b        // The result of adding 'a' and 'b'
	difference := a - b // The result of subtracting 'b' from 'a'
	product := a * b    // The result of multiplying 'a' and 'b'
	quotient := a / b   // The result of dividing 'a' by 'b' (Note: quotient truncates towards zero)
	remainder := a % b  // Remainder matches the sign of the first operand

	fmt.Println("Sum:", sum)
	fmt.Println("Difference:", difference)
	fmt.Println("Product:", product)
	fmt.Printf("Quotient: %.0f\n", float64(quotient)) // Prints the quotient as float (integer division in Go truncates towards zero)
	fmt.Println("Remainder:", remainder)
}
