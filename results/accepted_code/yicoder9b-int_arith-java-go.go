package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	sum := a + b        // The result of adding 'a' and 'b'
	difference := a - b // The result of subtracting 'b' from 'a'
	product := a * b    // The result of multiplying 'a' and 'b'
	quotient := a / b   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
	remainder := a % b  // The remainder of dividing 'a' by 'b'

	fmt.Println("a + b = ", sum)
	fmt.Println("a - b = ", difference)
	fmt.Println("a * b = ", product)
	fmt.Println("quotient of a / b = ", quotient)   // truncates towards 0
	fmt.Println("remainder of a / b = ", remainder) // same sign as first operand
}
