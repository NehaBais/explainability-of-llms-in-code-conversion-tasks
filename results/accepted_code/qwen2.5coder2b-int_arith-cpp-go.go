package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)

	sum := a + b
	diff := a - b
	product := a * b
	quotient := a / b
	remainder := a % b

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Difference: %d\n", diff)
	fmt.Printf("Product: %d\n", product)
	fmt.Printf("Quotient: %d, Remainder: %d\n", quotient, remainder)

	if a*b < 0 {
		fmt.Printf("Exponentiation: %d^%d = %d\n", a, b, a*b)
	}
}
