package main

import (
	"fmt"
	"math/bits"
)

func main() {
	A := uint(105)
	b := uint(91)
	fmt.Printf("a      = %08b\n", A)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("A | b  = %08b\n", A|b)
	fmt.Printf("A & b  = %08b\n", A&b)
	fmt.Printf("A ^ b  = %08b\n", A^b)
	fmt.Printf("!A     = %08b\n", ^A)
	fmt.Printf("A << 3 = %08b\n", A<<3)
	fmt.Printf("A >> 3 = %08b\n", A>>3)

	// Golang doesn't have a native bit rotation function, but this is how you can do it:
	fmt.Printf("Right rotate of A by b = %08b\n", bits.RotateLeft32(uint32(A), int32(-int(b)))) // -1 to get the right rotation because Golang's RotateLeft function rotates left (not right)
	fmt.Printf("Left rotate of A by b = %08b\n", bits.RotateLeft32(uint32(A), int32(int(b))))   // positive number for left rotation

}
