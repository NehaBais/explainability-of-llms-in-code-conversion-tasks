package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two numbers: ")
	fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	quotient := float64(a) / float64(b)
	remainder := a % b

	fmt.Printf("a + b = %d\n", sum)
	fmt.Printf("a - b = %d\n", difference)
	fmt.Printf("a * b = %d\n", product)
	fmt.Printf("quotient of a / b = %.2f\n", quotient) // rounded to 2 decimal places
	if remainder != 0 {
		fmt.Printf("remainder of a / b = %d\n", int(remainder)) // same sign as first operand if different
	} else {
		fmt.Printf("remainder of a / b = %d\n", remainder) // the result will always be 0 due to integer division
	}
}
