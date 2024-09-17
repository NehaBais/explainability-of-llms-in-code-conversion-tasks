package main

import "fmt"

func bitwise(a int, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)

	// Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
	// is negative, or is greater or equal to the number of bits in the integer being shifted.
	fmt.Printf("a shl b: %d\n", a<<uint(b))
	fmt.Printf("a shr b: %d\n", a>>uint(b))

	// Typically arithmetic right shift, but not guaranteed.
	ua := uint32(a)
	fmt.Printf("a lsr b: %d\n", (ua>>uint(b))&0xffffffff)
	// logical right shift is the same as arithmetic right shift in Go.

	// There are no rotation operators in Go, but as of c++20 there is a standard-library rotate function.
	// The rotate function works for all rotation amounts, but the integer being rotated must always be an unsigned integer.
	fmt.Printf("a rol b: %d\n", (a<<uint(b))|(a>>(32-uint(b))))
	fmt.Printf("a ror b: %d\n", ((a&0x1f)<<(32-uint(b)))|(a>>uint(b)))
}
