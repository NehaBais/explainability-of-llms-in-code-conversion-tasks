package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b :%d\n", a&b)
	fmt.Printf("a or b  :%d\n", a|b)
	fmt.Printf("a xor b :%d\n", a^b)
	fmt.Printf("not a   :%d\n", ^a)

	// Negative shift amount is not supported in Go, but it's the same as the right-shift operation if the count is positive. So use the '>>' operator to emulate negative shifting
	for i := b; i < 0; i++ {
		a >>= 1
	}
	fmt.Printf("a shl b :%d\n", a)

	// Right shift operation is not supported in Go as well, but it's the same as left-shift if count is positive. So use '<<' operator to emulate right shifting
	for i := b; i < 0; i++ {
		a = a << 1
	}
	fmt.Printf("a shr b :%d\n", a)

	// Go language does not have inbuilt rotate operations, hence writing custom functions for it
	a_rotr := rotr(uint32(a), uint32(b))
	fmt.Printf("a ror b : %d\n", int(a_rotr))

	a_rotl := rotl(uint32(a), uint32(b))
	fmt.Printf("a rol b : %d\n", int(a_rotl))
}

func rotr(x, y uint32) uint32 {
	mask := (1 << y) - 1 //all bits less significant than y are set to 1
	return ((x >> y) | (x << (32 - y))) & mask
}

func rotl(x, y uint32) uint32 {
	mask := (1 << y) - 1 //all bits less significant than y are set to 1
	return ((x << y) | (x >> (32 - y))) & mask
}
