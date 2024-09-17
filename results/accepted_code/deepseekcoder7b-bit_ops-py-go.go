package main

import (
	"fmt"
)

func bitwise_built_ins(width, a, b int) {
	mask := 1<<width - 1

	fmt.Printf("AND:\t0b%0*b & 0b%0*b =\t0b%0*b\n", width, a, width, b, width, (a&b)&mask)
	fmt.Printf("OR:\t0b%0*b |  0b%0*b = \t0b%0*b\n", width, a, width, b, width, (a|b)&mask)
	fmt.Printf("XOR:\t0b%0*b ^ 0b%0*b = \t0b%0*b\n", width, a, width, b, width, (a^b)&mask)
}

func rotr(width, a, r int) int {
	return (a >> r) | (a<<(width-r))&((1<<width)-1)
}

func rotl(width, a, r int) int {
	return ((a << r) | (a >> (width - r))) & ((1 << width) - 1)
}

func asr(width, a, r int) int {
	mask := (1 << width) - 1 //binary sequence of ones with bitwidth of a.
	return ((a >> r) & mask) | ((a << (width - (r&width - 1))) & ((1 << (width - (r&width - 1))) - 1))
}

func helper_funcs(width, a int) {

	fmt.Println("\nROTATIONS")

	for i := 0; i <= 4; i++ {
		fmt.Printf("rotr(%d, 0b%0*db, %d) = \t\t0b%0*b\n", width, a, width, i, width, rotr(width, a, i))
	}

	for i := 1; i <= 4; i++ {
		fmt.Printf("rotl(%d, 0b%0*db, %d) = \t\t0b%0*b\n", width, a, width, i, width, rotl(width, a, i))
	}

	fmt.Println("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT")

	for i := 1; i <= 4; i++ {
		fmt.Printf("asr(%d, 0b%0*db, %d) = \t\t0b%0*b\n", width, a, width, i, width, asr(width, a, i))
	}

}

func main() {
	bitwise_built_ins(8, 27, 125)
	helper_funcs(8, 27)
}
