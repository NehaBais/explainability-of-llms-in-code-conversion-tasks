package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b int) {
	fmt.Println("a and b:", a&b)
	fmt.Println("a or b: ", a|b)
	fmt.Println("a xor b:", a^b)
	fmt.Println("not a:  ", ^a)
	fmt.Println("a shl b:", a<<b)
	fmt.Println("a shr b:", a>>b) // Note: arithmetic right shift
	ua := uint32(a)
	fmt.Println("a lsr b:", ua>>b) // logical right shift (guaranteed)
	// rotation is not built-in in Go but can be easily implemented with bit manipulation functions from 'math/bits' package
	fmt.Println("a rol b:", bits.RotL32(ua, b))
	fmt.Println("a ror b:", bits.RotR32(ua, b))
}
