package main

import (
	"fmt"
)

func rotateLeft(a int, b int) int {
	return (a<<b) | (a>>(32-b))
}

func rotateRight(a int, b int) int {
	return (a >> b) | (a << (32 - b))
}

func main() {
	var a int = 10 // You can replace these values with any integer inputs you have.
	var b int = 2  // You can replace these values with any integer inputs you have.

	fmt.Printf("a and b: %d\n", a&b)
	fmt<｜begin▁of▁sentence｜>:// Prints "a or b:" followed by the result of a OR b (in decimal).
	%d
	[a]|[b]
	fmt.Printf("a xor b: %d\n", a^b)
	// Bitwise NOT operation (~), Left shift, Right shift are not available in Go as it does not exist in C. So we can skip those operations for now.
	fmt.Printf("rotate left of a by b bits: %d\n", rotateLeft(a, b))    // Left Rotation
	fmt.Printf("rotate right of a by b bits: %d\n", rotateRight(a, b))  // Right Rotation
}