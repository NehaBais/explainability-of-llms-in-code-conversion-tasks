package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scanf("%d %d", &a, &b) // read input from user

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b  // Truncates towards zero
	remainder := a % b // Remainder is same sign as the first operand

	fmt.Printf("sum:              %d\n", sum)
	fmt.Printf("difference:       %d\n", difference)
	fmt.Printf("product:          %d\n", product)
	fmt.Printf("integer quotient: %d (truncates towards zero)\n", quotient)
	fmt.Printf("remainder:        %d (same sign as first operand)\n", remainder)
}
