package main

import (
	"fmt"
)

func main() {
	var a, b int
	_, _ = fmt.Scan(&a, &b)

	sum := a + b
	difference := a - b
	product := a * b

	quotient := float64(a) / float64(b)
	remainder := a % b

	fmt.Printf("a+b = %d\n", sum)
	fmt.Printf("a-b = %d\n", difference)
	fmt.Printf("a*b = %d\n", product)
	fmt.Printf("a/b = %.0f, remainder %d\n", quotient, remainder)
}
