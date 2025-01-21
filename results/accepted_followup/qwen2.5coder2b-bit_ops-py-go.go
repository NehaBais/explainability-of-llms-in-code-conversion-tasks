package main

import (
	"fmt"
)

func bitwiseBuiltIns(width int, a int, b int) {
	mask := (1 << width) - 1
	fmt.Printf("AND:     0b%d \n", a)
	fmt.Printf("& 0b%d\n", b)
	fmt.Printf("= 0b%d \n", (a&b)&mask)

	fmt.Printf("OR:      0b%d \n", a)
	fmt.Printf("| 0b%d\n", b)
	fmt.Printf("= 0b%d \n", (a|b)&mask)

	fmt.Printf("XOR:     0b%d \n", a)
	fmt.Printf("^ 0b%d\n", b)
	fmt.Printf("= 0b%d \n", (a^b)&mask)

	fmt.Printf("NOT:   ~ 0b%d \n", a)
	fmt.Printf("= 0b%d \n", (^a)&mask)

	fmt.Println("SHIFTS")

	fmt.Printf("\tRIGHT:   rotr(%d, 0b%d, 1)\n", width, a)
	fmt.Printf("\t\t=       0b%d\n", rotr(width, a, 1))
	fmt.Printf("\t\trotr(%d, 0b%d, 2)\n", width, a)
	fmt.Printf("\t\t=       0b%d\n", rotr(width, a, 2))
	fmt.Printf("\t\trotl(%d, 0b%d, 4)\n", width, a)
	fmt.Printf("\t\t=       0b%d\n", rotl(width, a, 4))

	fmt.Println("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT")

	fmt.Printf("\tasr(%d, 0b%d, 1)\n", width, a)
	fmt.Printf("\t=      0b%d\n", asr(width, a, 1))
	fmt.Printf("\tasr(%d, 0b%d, 2)\n", width, aa)
	fmt.Printf("\t=      0b%d\n", asr(width, aa, 2))
	fmt.Printf("\tasr(%d, 0b%d, 4)\n", width, a)
	fmt.Printf("\t=      0b%d\n", asr(width, a, 4))
	fmt.Printf("\tasr(%d, 0b%d, 8)\n", width, aa)
	fmt.Printf("\t=      0b%d\n", asr(width, aa, 8))
}

func rotr(width int, a int, count int) int {
	return (a >> (width - count)) | (a << count)
}

func rotl(width int, a int, count int) int {
	return ((a << count) & (1<<width - 1)) | ((a >> (width - count)) & (1<<(width-1) - 1))
}

func asr(width int, a int, count int) int {
	if count >= width {
		return 0
	}
	mask := (1 << count) - 1
	return (a >> count) | (a<<(-count-1))&mask
}

func main() {
	a := 27
	b := 125
	aa := a // Define aa as the same as a

	bitwiseBuiltIns(8, a, b)
}
