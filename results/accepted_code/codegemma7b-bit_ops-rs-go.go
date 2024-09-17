package main

import "fmt"

func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	fmt.Printf("a | b  = %08b\n", a|b)
	fmt.Printf("a & b  = %08b\n", a&b)
	fmt.Printf("a ^ b  = %08b\n", a^b)
	fmt.Printf("!a     = %08b\n", ^a)
	fmt.Printf("a << 3 = %08b\n", a<<3)
	fmt.Printf("a >> 3 = %08b\n")
	fmt.Printf("a >> 3 (arithmetic) = %08b\n", a>>3)
	fmt.Printf("a << 3 (rotate left) = %08b\n", a<<3&0xff)
	fmt.Printf("a >> 3 (rotate right) = %08b\n", a>>3&0xff)
}
