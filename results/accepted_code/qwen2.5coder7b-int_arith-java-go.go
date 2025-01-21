package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b
	division := a / b
	remainder := a % b

	fmt.Println("a + b =", sum)
	fmt.Println("a - b =", difference)
	fmt.Println("a * b =", product)
	fmt.Printf("quotient of a / b = %d (truncates towards 0)\n", division)
	fmt.Printf("remainder of a / b = %d (same sign as first operand)\n", remainder)
}
