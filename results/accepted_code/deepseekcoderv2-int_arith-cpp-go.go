package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scanln(&a, &b)
	fmt.Println("Sum:", a+b)
	fmt.Println("Difference:", a-b)
	fmt.Println("Product:", a*b)
	quotient := float64(a) / float64(b)
	remainder := a % b
	fmt.Printf("Quotient: %.2f, Remainder: %d\n", quotient, remainder)
}
