package main

import (
	"fmt"
)

func main() {
	width := uint(8)
	a := uint8(27)
	b := uint8(125)
	fmt.Printf("\nAND:     0b%08b \n       & 0b%08b \n       = 0b%08b\n", a, b, and(a, b, width))
	fmt.Printf("\nOR:      0b%08b \n       | 0b%08b \n       = 0b%08b\n", a, b, or(a, b, width))
	fmt.Printf("\nXOR:     0b%08b \n       ^ 0b%08b \n       = 0b%08b\n", a, b, xor(a, b, width))
	fmt.Printf("\nNOT:   ~ 0b%08b \n       = 0b%08b\n", a, not(a, width))

	fmt.Println("\nSHIFTS")

	fmt.Printf("      RIGHT:   0b%08b >> 1 \n             = 0b%08b\n", a, rightShift(a, 1, width))
	fmt.Printf("      LEFT:    0b%08b << 1 \n             = 0b%08b\n", a, leftShift(a, 1, width))

	aRot := uint8(27)
	fmt.Println("\nROTATIONS")

	fmt.Printf("      RIGHT:   rotr(%d, 0b%08b, 1) \n               =       0b%08b\n", width, aRot, rotr(aRot, 1, width))
	fmt.Printf("               rotr(%d, 0b%08b, 2)\n               =       0b%08b\n", width, aRot, rotr(aRot, 2, width))
	fmt.Printf("               rotr(%d, 0b%08b, 4)\n               =       0b%08b\n", width, aRot, rotr(aRot, 4, width))

	fmt.Println("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT")

	aa := uint8(27 | (1 << (width - 1)))
	fmt.Printf("               asr(%d, 0b%08b, 1)\n               =      0b%08b\n", width, aRot, asr(width, aRot, 1))
	fmt.Printf("               asr(%d, 0b%08b, 2)\n               =      0b%08b\n", width, aa, asr(width, aa, 2))
	fmt.Printf("               asr(%d, 0b%08b, 4)\n               =      0b%08b\n", width, aRot, asr(width, aRot, 4))

}

func and(a, b uint8, width uint) uint {
	return (a & b)
}

func or(a, b uint8, width uint) uint {
	return (a | b)
}

func xor(a, b uint8, width uint) uint {
	return (a ^ b)
}

func not(a uint8, width uint) uint {
	return (^a & ((1 << width) - 1))
}

func rightShift(a uint8, shift uint, width uint) uint {
	return (a >> shift)
}

func leftShift(a uint8, shift uint, width uint) uint {
	return (a << shift)
}

func rotr(a uint8, shift uint, width uint) uint {
	return ((a >> shift) | (a << (width - shift)))
}

func asr(width uint, a uint8, shift uint) uint {
	if a&1 == 0 {
		return rightShift(a, shift, width)
	} else {
		return (leftShift(^a, shift, width)) | (1 << (width - 1))
	}
}
