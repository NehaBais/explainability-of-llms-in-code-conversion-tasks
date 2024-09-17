package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	var a, b int

	// Get two integers from user
	fmt.Print("Enter first integer: ")
	_, err := fmt.Scan(&a)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	fmt.Print("Enter second integer: ")
	_, err = fmt.Scan(&b)
	if err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	// If b is 0, print an error message and exit the program
	if b == 0 {
		fmt.Println("Error: Division by zero")
		os.Exit(2)
	}

	// Display their: sum, difference, product, integer quotient, remainder
	sum := a + b
	difference := a - b
	product := a * b
	quotient := float64(a) / float64(b)           // truncates towards zero (in Go 1.8 and onwards)
	remainder := math.Mod(float64(a), float64(b)) // same sign as first operand (in Go 1.8 and onwards)

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", difference)
	fmt.Printf("Product: %d\n", product)
	fmt.Printf("Quotient: %.2f\n", quotient)
	fmt.Printf("Remainder: %.2f\n", remainder)
}
