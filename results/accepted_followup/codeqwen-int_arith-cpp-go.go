package main

import (
	"fmt"
)

func main() {
	var A, b int
	fmt.Scan(&A, &b)

	sum := A + b
	diff := A - b
	product := A * b
	quotient := A / b
	remainder := A % b

	// exponentiation := A * b // Go doesn't support exponentiation directly in the form of `^` operator. You can use a loop or math.Pow function for this.

	fmt.Printf("A+b = %d\n", sum)
	fmt.Printf("A-b = %d\n", diff)
	fmt.Printf("A*b = %d\n", product)
	fmt.Printf("A/b = %d, remainder %d\n", quotient, remainder)

}
