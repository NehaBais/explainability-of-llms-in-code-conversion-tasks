package main

import (
	"fmt"
)

func bitwise(a, b int) {
	fmt.Println("a AND b:", a&b)
	fmt.Println("a OR b:", a|b)
	fmt.Println("a XOR b:", a^b)
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b:", a<<b) // left shift
	fmt.Println("a >> b:", a>>b) // arithmetic right shift
	// In Go, there is no logical right shift operator (>>>), so we use the arithmetic right shift instead
	fmt.Println("a >>> b (arithmetic right shift):", uint(a)>>uint(b)) // logical right shift emulation
}

func main() {
	a := 10 // Example values for a and b
	b := 5
	bitwise(a, b)
}
