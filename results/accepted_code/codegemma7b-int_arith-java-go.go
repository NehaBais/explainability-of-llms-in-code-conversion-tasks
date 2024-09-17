package main

import "fmt"

func main() {
	// Get the 2 numbers from command line arguments
	var a, b int
	fmt.Scanf("%d %d", &a, &b)

	sum := a + b        // The result of adding 'a' and 'b'
	difference := a - b // The result of subtracting 'b' from 'a'
	product := a * b    // The result of multiplying 'a' and 'b'
	division := a / b   // The result of dividing 'a' by 'b' (truncates towards 0)
	remainder := a % b  // The remainder of dividing 'a' by 'b' (same sign as first operand)

	fmt.Println("a + b = ", sum)
	fmt.Println("a - b = ", difference)
	fmt.Println("a * b = ", product)
	fmt.Println("quotient of a / b = ", division)
	fmt.Println("remainder of a / b = ", remainder)
}
