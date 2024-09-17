package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func main() {
	var A, b int

	fmt.Println("Enter two integers:")
	_, err := fmt.Scan(&A, &b)

	if err != nil {
		fmt.Printf("Error reading input: %v\n", err)
		os.Exit(1)
	}

	sum := A + b
	difference := A - b
	product := A * b
	integerQuotient := A / b
	remainder := A % b

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", difference)
	fmt.Printf("Product: %d\n", product)
	fmt.Printf("Integer Quotient (towards zero): %d\n", integerQuotient)

	if remainder >= 0 {
		fmt.Printf("Remainder (same sign as first operand): %d\n", remainder)
	} else {
		fmt.Printf("Remainder (same sign as second operand): %d\n", remainder+math.Abs(float64(A)))
	}

	// Go does not support exponentiation operator like Rust, so we use pow function from math package
	exponent := A + b // This is just a placeholder value, you can replace it with the actual exponent
	fmt.Printf("Exponentiation (not supported in Go): %d\n", int(math.Pow(float64(A), float64(b))))
}
