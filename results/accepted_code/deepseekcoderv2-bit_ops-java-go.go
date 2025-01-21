package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a, b int) {
	fmt.Printf("a AND b: %d\n", a&b)
	fmt.Printf("a OR b: %d\n", a|b)
	fmt.Printf("a XOR b: %d\n", a^b)
	fmt.Printf("NOT a: %d\n", ^a)
	fmt.Printf("a << b: %d\n", a<<b) // left shift
	fmt.Printf("a >> b: %d\n", a>>b) // arithmetic right shift
	// In Go, there is no logical right shift operator, so we use arithmetic right shift for simplicity
	fmt.Printf("a >>> b: %d\n", uint(a)>>>(uint(b))) // logical right shift (converted to uint for demonstration)
	fmt.Printf("a rol b: %d\n", bits.RotateLeft(uint(a), b)) // rotate left, using math/bits package
	fmt.Printf("a ror b: %d\n", bits.RotateRight(uint(a), b)) // rotate right, using math/bits package
}

func main() {
	a := 10 // Example values for a and b
	b := 5
	bitwise(a, b)
}