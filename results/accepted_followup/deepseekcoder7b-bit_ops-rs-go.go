package main

import (
	"fmt"
)

func RightShift(a uint8, b uint8) uint8 {
	return a >> b
}
func LeftRotate(a uint8, b uint8) uint8 {
	return (a << b) | (a >> (8 - b))
}
func RightRotate(a uint8, b uint8) uint8 {
	return (a >> b) | (a << (8 - b))
}
func main() {
	var a uint8 = 105
	var b uint8 = 91
	fmt.Printf("a      = %08b\n", a)
	fmt.Printf("b      = %08b\n", b)
	s := struct{ a, op, b string }{string(a), "|", string(b)}
	fmt.Printf("%s %s %s = %08b\n", s.a, s.op, s.b, (a | b)) // bitwise OR operation
	s = struct{ a, op, b string }{string(a), "&", string(b)}
	fmt.Printf("%s %s %s = %08b\n", s.a, s.op, s.b, (a & b)) // bitwise AND operation
	s = struct{ a, op, b string }{string(a), "^", string(b)}
	fmt.Printf("%s %s %s = %08b\n", s.a, s.op, s.b, (a ^ b))                   // bitwise XOR operation
	fmt.Printf("!a     = %08b\n", ^a)                                          // Bitwise NOT Operation
	fmt.Printf("a << 3 = %08b\n", a<<3)                                        // Left shift operation
	fmt.Printf("a >> 3 = %08b\n", RightShift(a, 3))                            // Right shift operation
	fmt.Printf("Left rotate of a by b is  = %08b\n", LeftRotate(a, uint8(b)))  // Left Rotate Operation
	fmt.Printf("Right rotate of a by b is = %08b\n", RightRotate(a, uint8(b))) // Right Rotate Operation
}
