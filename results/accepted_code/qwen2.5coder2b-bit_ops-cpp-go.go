package main

import (
	"fmt"
)

func bitwise(a, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)

	// Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
	// is negative, or is greater or equal to the number of bits in the integer being shifted.
	fmt.Printf("a shl b: %d\n", a<<b)
	fmt.Printf("a shr b: %d\n", a>>b)
	fmt.Printf("a lsr b: %d\n", a>>b)

	// there are no rotation operators in Go, but as of c++20 there is a standard-library rotate function.
	// The rotate function works for all rotation amounts, but the integer being rotated must always be an
	// unsigned integer.
	fmt.Printf("a rol b: %d\n", (uint32(a)<<b)>>b)
	fmt.Printf("a ror b: %d\n", (uint32(a)>>b)<<b)
}

func main() {
	bitwise(10, 5)
}
