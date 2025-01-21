package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %b\n", a&b)
	fmt.Printf("a or b:  %b\n", a|b)
	fmt.Printf("a xor b: %b\n", a^b)
	fmt.Printf("not a:   %b\n", ^a)

	// Go provides left shift and right shift operators directly on integers.
	fmt.Printf("a shl b: %b\n", a<<b)
	fmt.Printf("a shr b: %b\n", a>>b)

	// For logical right shift, we can cast to uint before shifting.
	ua := uint(a)
	fmt.Printf("a lsr b: %b\n", ua>>uint(b))

	// Implementing left and right rotations manually since Go does not have built-in rotation functions.
	leftRotate := func(val uint, shift int) uint {
		return (val << shift) | (val >> (32 - shift))
	}
	rightRotate := func(val uint, shift int) uint {
		return (val >> shift) | (val << (32 - shift))
	}
	fmt.Printf("a rol b: %b\n", leftRotate(ua, b))
	fmt.Printf("a ror b: %b\n", rightRotate(ua, b))
}

func main() {
	bitwise(10, 2) // Example usage
}
