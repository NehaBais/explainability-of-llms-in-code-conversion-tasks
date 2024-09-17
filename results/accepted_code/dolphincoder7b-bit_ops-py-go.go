package main

import (
	"fmt"
	"strings"
)

func bitwiseBuiltIns(width uint64, a, b int64) {
	mask := (1 << width) - 1

	// Perform AND operation
	andResult := a & b & mask
	// Perform OR operation
	orResult := a | b&mask
	// Perform XOR operation
	xorResult := a ^ b&mask
	// Perform NOT operation
	notResult := (^a) & mask

	// Print the results
	fmt.Printf("    AND:     %0b\n", andResult)
	fmt.Printf("    OR:      %0b\n", orResult)
	fmt.Printf("    XOR:     %0b\n", xorResult)
	fmt.Printf("    NOT:    ~%0b = %0b\n", a, notResult)

	// Perform right shift operation
	rightShift := (a >> 1) & mask
	leftShift := (a << 1) & mask

	fmt.Println("    SHIFTS")
	fmt.Printf("      RIGHT:   %0b >> 1 = %0b\n", a, rightShift)
	fmt.Printf("      LEFT:    %0b << 1 = %0b\n", a, leftShift)

	// Perform rotate operations
	rotateRight := rotr(width, a, b)
	rotateLeft := rotl(width, a, b)

	fmt.Println("\nROTATIONS")
	fmt.Printf("      RIGHT:   rotr(%d, 0b%0b, %d) = 0b%0b\n", width, a, b, rotateRight)
	fmt.Printf("      LEFT:    rotl(%d, 0b%0b, %d) = 0b%0b\n", width, a, b, rotateLeft)

	// Perform sign-extending arithmetic right shift operation
	signExtendingArithmeticShiftRight := asr(width, a, b)

	fmt.Println("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT")
	fmt.Printf("      asr(%d, 0b%0b, %d) = 0b%0b\n", width, a, b, signExtendingArithmeticShiftRight)
}

func helperFunctions(width uint64, a int64) {
	// Perform sign-extending arithmetic right shift operation on aa (i.e., with the sign bit set to 1)
	signExtendingArithmeticShiftRight := asr(width, int64(1)<<int(width-1), b)

	fmt.Println("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT")
	fmt.Printf("      asr(%d, 0b%0b, %d) = 0b%0b\n", width, a, b, signExtendingArithmeticShiftRight)
}

// rotr function - performs rotate right operation with the specified amount of bits
func rotr(width uint64, a int64, shiftAmount int64) int64 {
	if shiftAmount >= 0 && shiftAmount <= width-1 {
		return (a >> uint64(shiftAmount)) | (a << (width - uint64(shiftAmount)))
	} else if shiftAmount < 0 {
		shiftAmount = shiftAmount % int64(width)
		return rotr(width, a, width-uint64(-shiftAmount))
	} else {
		shiftAmount = shiftAmount % int64(width)
		return (a << uint64(shiftAmount)) | (a >> (width - uint64(shiftAmount)))
	}
}

// rotl function - performs rotate left operation with the specified amount of bits
func rotl(width uint64, a int64, shiftAmount int64) int64 {
	if shiftAmount >= 0 && shiftAmount <= width-1 {
		return (a << uint64(shiftAmount)) | (a >> (width - uint64(shiftAmount)))
	} else if shiftAmount < 0 {
		shiftAmount = shiftAmount % int64(width)
		return rotl(width, a, width-uint64(-shiftAmount))
	} else {
		shiftAmount = shiftAmount % int64(width)
		return (a >> uint64(shiftAmount)) | (a << (width - uint64(shiftAmount)))
	}
}

// asr function - performs sign-extending arithmetic right shift operation with the specified amount of bits
func asr(width uint64, a int64, shiftAmount int64) int64 {
	if shiftAmount >= 0 && shiftAmount <= width-1 {
		return (a >> uint64(shiftAmount)) | (a << (width - uint64(shiftAmount)))
	} else if shiftAmount < 0 {
		// Perform left arithmetic shift first and then perform right sign-extending shift
		leftShift := asr(width, a<<uint64(-shiftAmount), 0)
		return leftShift >> (int64(width) + int64(shiftAmount))
	} else {
		// Perform right arithmetic shift first and then perform left sign-extending shift
		rightShift := asr(width, a>>uint64(-shiftAmount), 0)
		return rightShift << (int64(width) + int64(shiftAmount))
	}
}

func main() {
	bitwiseBuiltIns(8, 27, 125)

	helperFunctions(8, 27)
}
