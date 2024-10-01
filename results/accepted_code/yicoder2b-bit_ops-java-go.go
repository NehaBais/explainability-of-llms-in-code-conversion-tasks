package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b int) {
	and := a & b
	or := a | b
	xor := a ^ b
	notA := ~a
	lshift := a << b
	rshift := uint64(a) >> uint64(b)
	rightShift := int(a >> uint64(b))          // equivalent to rshift in Java
	rotateLeft := bits.RotateLeft(int(a), b)   // rotate left
	rotateRight := bits.RotateRight(int(a), b) // rotate right

	fmt.Printf("a AND b: %d\n", and)
	fmt.Printf("a OR b: %d\n", or)
	fmt.Printf("a XOR b: %d\n", xor)
	fmt.Printf("NOT a: %d\n", notA)
	fmt.Printf("a << b: %d\n", lshift)
	fmt.Printf("a >> b: %d\n", rshift)
	fmt.Printf("a >>> b: %d\n", rightShift)
	fmt.Printf("a rol b: %d\n", rotateLeft)  // equivalent to rotate left in Java 1.5+
	fmt.Printf("a ror b: %d\n", rotateRight) // equivalent to rotate right in Java 1.5+
}

func main() {
	bitwise(20, 3)
}
