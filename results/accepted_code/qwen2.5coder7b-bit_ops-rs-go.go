package main

import (
	"fmt"
)

func binaryShifts(a, b uint8) {
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << %d = %08b\n", int(b), a<<int(b))
	fmt.Printf("a >> %d = %08b\n", int(b), a>>int(b))
}

func main() {
	var a uint8 = 105
	var b uint8 = 91

	binaryShifts(a, b)
}
