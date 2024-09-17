package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Println("a and b: ", a&b) // Bitwise AND
	fmt.Println("a or b:  ", a|b) // Bitwise OR
	fmt.Println("a xor b: ", a^b) // Bitwise XOR

	// Bitwise NOT is performed using ^ with one's complement (all bits inverted). For negative numbers, it will give positive result by adding 1.
	fmt.Println("not a:   ", ^a+1)

	shiftAmount := uint(b) // converting int to uint for the shift operations

	fmt.Println("a shl b: ", a<<shiftAmount) // Left shift
	// Right shift is not always guaranteed in Go as it is done by the compiler
	fmt.Println("a shr b: ", a>>shiftAmount) // Typically arithmetic right shift, but not guaranteed

	// For logical right shift (Go's equivalent of C/C++'s >>), we need to convert a into uint and then use right shift operator
	ua := uint(a)
	fmt.Println("a lsr b: ", ua>>shiftAmount) // Logical right shift (guaranteed)

	// There is no direct way to rotate in Go, but you can manually achieve it using bitwise operations.
	leftRotate := uint(a)*(1<<shiftAmount) | (ua >> (32 - shiftAmount)) // Left rotation
	fmt.Println("a rol b: ", leftRotate)

	// Right Rotation
	rightRotate := ua>>shiftAmount | a<<(32-shiftAmount)
	fmt.Println("a ror b: ", rightRotate)
}
