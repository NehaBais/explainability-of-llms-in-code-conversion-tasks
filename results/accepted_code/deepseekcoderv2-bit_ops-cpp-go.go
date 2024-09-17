package main

import (
	"fmt"
	"unsafe"
)

func Bitwise(a, b int) {
	fmt.Println("a and b:", a&b) // Note: parentheses are needed because & has lower precedence than <<
	fmt.Println("a or b: ", a|b)
	fmt.Println("a xor b:", a^b)
	fmt.Println("not a:  ", ^a)

	// Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
	// is negative, or is greater or equal to the number of bits in the integer being shifted.
	fmt.Println("a shl b:", a<<b) // Note: "<<" is used both for output and for left shift
	fmt.Println("a shr b:", a>>b) // typically arithmetic right shift, but not guaranteed
	ua := uint(a)                 // Convert to unsigned integer to perform logical right shift
	fmt.Println("a lsr b:", ua>>b)
	fmt.Println("a rol b:", leftRotate(uint32(a), int(b)))  // Left rotate using the function below
	fmt.Println("a ror b:", rightRotate(uint32(a), int(b))) // Right rotate using the function below
}

func main() {
	Bitwise(10, 5) // Example input
}

// Helper functions for left and right rotation
func leftRotate(n uint32, count int) uint32 {
	return (n << uint8(count)) | (n >> (32 - uint8(count)))
}

func rightRotate(n uint32, count int) uint32 {
	return (n >> uint8(count)) | (n << (32 - uint8(count)))
}
