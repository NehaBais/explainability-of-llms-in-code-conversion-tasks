package main

import "fmt"

func bitwise(a int, b int) {
	and := a & b             // Bitwise AND operation
	or := a | b              // Bitwise OR operation
	xor := a ^ b             // Bitwise XOR operation
	not_a := ~a & 0xffffffff // Bitwise NOT on integer
	left_shift := a << b     // Left shift
	right_shift := a >> b    // Right shift (arithmetic)
	c := int(uint64(a))      // Convert signed integer to unsigned for logical right shift
	rShift := c >> b         // Logical right shift
	fmt.Printf("a and b: %d\n", and)
	fmt.Printf("a or b: %d\n", or)
	fmt.Printf("a xor b: %d\n", xor)
	fmt.Printf("not a: %d\n", not_a)
	fmt.Printf("a << n: %d\n", left_shift)
	fmt.Printf("a >> n: %d\n", right_shift)
	fmt.Printf("c >> b: %d\n", rShift)
}
func main() {
	bitwise(5, 3) // Test the function with sample values
}
