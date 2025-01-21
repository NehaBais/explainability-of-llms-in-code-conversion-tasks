package main

import (
	"fmt"
	"strings"
)

func bitwiseBuiltIns(width uint64, a int64, b int64) {
	mask := 1<<width - 1
	fmt.Printf("mask = %v\n", mask)

	andResult := a & b & mask
	orResult := a | b&mask
	xorResult := a ^ b&mask
	notResult := (^a) & mask

	rightShift := (a >> 1) & mask
	leftShift := (a << 1) & mask

	fmt.Printf("AND result = %v\n", andResult)
	fmt.Printf("OR result = %v\n", orResult)
	fmt.Printf("XOR result = %v\n", xorResult)
	fmt.Printf("NOT result = %v\n", notResult)

	fmt.Println("\nRIGHT SHIFT")
	fmt.Printf("%v\n", rightShift)

	fmt.Println("\nLEFT SHIFT")
	fmt.Printf("%v\n", leftShift)
}

func helperFunctions(width uint64, a int64) {
	mask := 1<<width - 1

	// Perform sign-extending arithmetic right shift with the specified amount of bits
	asrResult := (a >> uint64(-2)) & mask
	fmt.Printf("Sign-extending arithmetic right shift result = %v\n", asrResult)
}

func main() {
	bitwiseBuiltIns(8, 27, 125)

	helperFunctions(8, 27)
}
