package main

import (
	"fmt"
	"math/bits"
)

func printBinary(n int, width int) {
	fmt.Printf("0b%s\n", bits.FormatInt(uint64(n), width))
}

func and(a, b int) int {
	return a & b
}

func or(a, b int) int {
	return a | b
}

func xor(a, b int) int {
	return a ^ b
}

func not(a int) int {
	return ^a & ((1 << bits.Size) - 1) // Assuming the size of bit is 32 or 64
}

func shifts() {
	printBinary(and(0b010, 1), 8)
	printBinary(or(0b010, 1), 8)
	printBinary(xor(0b010, 1), 8)
	printBinary(not(0b010), 8)

	printBinary(bits.RotateLeft(and(0b010, 1), 1), 8)
	printBinary(bits.RotateRight(or(0b010, 1), 1), 8)
	printBinary(bits.RotateLeft(xor(0b010, 1), 1), 8)
	printBinary(not(and(0b010, 3)), 8)
}

func main() {
	shifts()
}
