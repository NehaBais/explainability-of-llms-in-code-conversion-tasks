package main

import (
	"fmt"
	"math/bits"
)

func And(a, b int) int {
	return bits.And(a, b)
}

func Or(a, b int) int {
	return bits.Or(a, b)
}

func Xor(a, b int) int {
	return bits.Xor(a, b)
}

func Lshift(a, b uint) uint {
	return bits.Lshift(a, b)
}

func Rshift(a, b uint) uint {
	return bits.Rshift(a, b)
}

func RotateLeft(a, b uint) uint {
	return bits.RotateLeft(a, b)
}

func RotateRight(a, b uint) uint {
	return bits.RotateRight(a, b)
}

func main() {
	a := 32
	b := 4
	fmt.Println("a AND b: ", And(a, b))
	fmt.Println("a OR b:", Or(a, b))
	fmt.Println("a XOR b:", Xor(a, b))
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b: ", Lshift(a, uint(b)))      // left shift
	fmt.Println("a >> b: ", Rshift(a, uint(b)))      // arithmetic right shift
	fmt.Println("a >>> b:", Lshift(a, uint(b)))      // logical right shift
	fmt.Println("a rol b:", RotateLeft(a, uint(b)))  // rotate left
	fmt.Println("a ror b:", RotateRight(a, uint(b))) // rotate right
}
