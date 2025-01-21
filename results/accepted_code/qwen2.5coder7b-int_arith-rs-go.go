package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scanf("%d %d", &a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b
	remainder := a % b

	fmt.Printf("Sum:\t\t%d\n", sum)
	fmt.Printf("Difference:\t%d\n", difference)
	fmt.Printf("Product:\t%d\n", product)
	fmt.Printf("Integer Quotient:\t%d\n", quotient) // rounds towards zero
	fmt.Printf("Remainder:\t%d\n", remainder)       // same sign as first operand
}
