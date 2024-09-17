package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %s\n", bits.FormatUint(uint64(a), 2))
	fmt.Printf("b      = %s\n", bits.FormatUint(uint64(b), 2))
	fmt.Printf("a | b  = %s\n", bits.FormatUint(uint64(a|b), 2))
	fmt.Printf("a & b  = %s\n", bits.FormatUint(uint64(a&b), 2))
	fmt.Printf("a ^ b  = %s\n", bits.FormatUint(uint64(a^b), 2))
	fmt.Printf("!a     = %s\n", bits.FormatUint(uint64(!a), 2))
	fmt.Printf("a << 3 = %s\n", bits.FormatUint(uint64(a<<3), 2))
	fmt.Printf("a >> 3 = %s\n", bits.FormatUint(uint64(a>>3), 2))
}
