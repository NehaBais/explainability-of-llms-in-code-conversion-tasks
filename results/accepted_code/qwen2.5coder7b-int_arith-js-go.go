package main

import (
	"fmt"
)

func main() {
	a := 10 // Replace with the first integer input
	b := 5  // Replace with the second integer input

	sum := a + b
	difference := a - b
	product := a * b
	division := a / float64(b)
	remainder := a % b
	exponentiation := float64(a) * *float64(b)

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("a / b = %.2f\n", division)
	fmt.Printf("a %% b = %d\n", remainder)
	fmt.Printf("a ** b = %.2f\n", exponentiation)

	// Handling sign of remainder
	if a < 0 && b > 0 || a > 0 && b < 0 {
		fmt.Println("Remainder's sign does not match the signs of the operands")
	} else {
		fmt.Println("Remainder's sign matches the sign of the first operand")
	}

	// Handling rounding of quotient
	if division != float64(int(division)) {
		fmt.Println("Quotient rounds towards zero")
	} else if division < 0 && a < 0 || division > 0 && b > 0 {
		fmt.Println("Quotient rounds towards negative infinity")
	}
}
