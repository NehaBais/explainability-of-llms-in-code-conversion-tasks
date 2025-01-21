package main

import  (
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
	// Right shift is not always guaranteed in Go as it's done by compiler
	fmt.Println("a shr b: ", a>>shiftAmount) // Typically arithmetic right shift, but not guaranteed
	
	// For logical right shift (Go's equivalent of C/C++'s >>), we need to convert a into uint and then use right shift operator
	ua := uint(a)
	fmt.Println("a lsr b: ", ua>>shiftAmount) // Logical right shift (guaranteed)
	
	// Left rotation
	leftRotate := int(uint(a)*(1<<shiftAmount) | ua>>(32-shiftAmount)) 
	fmt.Println("a rol b: ", leftRotate)
	
	// Right Rotation
	rightRotate := int(ua>>shiftAmount | uint(a)<<(32-shiftAmount))
	fmt<｜begin▁of▁sentence｜>Println "a ror b: ", rightRotate)
}