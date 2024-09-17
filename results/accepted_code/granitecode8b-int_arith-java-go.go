package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)
	sum := a + b
	difference := a - b
	product := a * b
	quotient := a / b
	remainder := a % b
	fmt.Printf("a + b = %dn", sum)
	fmt.Printf("a - b = %dn", difference)
	fmt.Printf("a * b = %dn", product)
	fmt.Printf("quotient of a / b = %dn", quotient)   // rounds towards 0
	fmt.Printf("remainder of a / b = %dn", remainder) // same sign as first operand
}
