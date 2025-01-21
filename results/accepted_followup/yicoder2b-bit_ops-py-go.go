package main

import (
	"fmt"
	"math/bits"
)

const width = 32 // Assuming a 32 bit integer

func bitwiseBuiltIns(a, b int) {
	mask := int64(1) << int64(width) - 1
	printBinary(a, " AND ", b, " = ", (int64(a) & int64(b))&mask, width)
	printBinary(a, " OR ", b, " = ", (int64(a) | int64(b))&mask, width)
	printBinary(a, " XOR ", b, " = ", (int64(a) ^ int64(b))&mask, width)
	printBinary((~a)&mask, " NOT = ", a&mask, width)

	printBinary(int64(a)>>1, " RIGHT = ", int64(0))
	printBinary(int64(a)<<1, " LEFT = ", int64(0))
}

func rotl(width int, a int, n int) {
	return int((uint64(a) << uint64(n)) | (uint64(a) >> uint64(bits.TrailingZeros(uint32(-a))-n))) & ((1 << width) - 1)
}

func rotr(width int, a int, n int) {
	return rotl(width, a, -n)&mask
}

func asr(width int, a int, n int) {
	if n < 0 {
		return rotr(width, a, -n)
	} else if n == 0 {
		return a & mask
	} else {
		aa := uint64(a) << uint64(n-1)) | (uint64(~a) >> uint64(1))
		return int(aa >> uint64(n))) & mask
	}
}

func printBinary(x, operand string, ...int) {
	if x < 0 {
		fmt.Printf("%s %d = -", operand, -x, width/2)
	} else {
		fmt.Printf("%s %d = ", operand, x, width/2)
	}
	if x != int64(0) && bits.Pow2(width-1) > x {
		for i := 0; i < width-bits.Count(x); i++ {
			fmt.Printf(" ", end+1)
		}
	}
	bits.Printf(end, uint64(x))
}

func main() {
	bitwiseBuiltIns(-27, 125)
	printBinary(int64(0), "LEFT = ", int64(8), width)
	printBinary(int64(8), "RIGHT = ", int64(0))
}