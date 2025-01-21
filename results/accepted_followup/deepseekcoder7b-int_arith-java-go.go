package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter two integer numbers")
	fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	// To emulate this behavior, we can use type conversion on the operands
	quotient := int(float64(a) / float64(b))
	remainder := a % b

	fmt.Println("a + b =", sum)
	fmt.Println("a - b =", difference)
	fmt.Println("a * b =", product)
	fmt.Println("quotient of a / b (rounded towards zero) =", quotient)
	fmt.Println("remainder of a / b has the same sign as first operand =", remainder)
}
