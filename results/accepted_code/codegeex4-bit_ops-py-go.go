package main

import (
	"fmt"
	"strconv"
)

func bitwiseBuiltin(width int, a int64, b int64) {
	mask := (1 << uint(width)) - 1
	fmt.Printf("    AND:     0b%s \n", strconv.FormatInt(a&mask, 2))
	fmt.Printf("           & 0b%s \n", strconv.FormatInt(b&mask, 2))
	fmt.Printf("           = 0b%s\n\n", strconv.FormatInt((a&b)&mask, 2))

	fmt.Printf("    OR:      0b%s \n", strconv.FormatInt(a&mask, 2))
	fmt.Printf("           | 0b%s \n", strconv.FormatInt(b&mask, 2))
	fmt.Printf("           = 0b%s\n\n", strconv.FormatInt((a|b)&mask, 2))

	fmt.Printf("    XOR:     0b%s \n", strconv.FormatInt(a&mask, 2))
	fmt.Printf("           ^ 0b%s \n", strconv.FormatInt(b&mask, 2))
	fmt.Printf("           = 0b%s\n\n", strconv.FormatInt((a^b)&mask, 2))

	fmt.Printf("    NOT:   ~ 0b%s \n", strconv.FormatInt(a&mask, 2))
	fmt.Printf("           = 0b%s\n\n", strconv.FormatInt((^(a&mask))&mask, 2))
}

func rotr(width int, a int64, n int) int64 {
	if n < 0 {
		return rotl(width, a, -n)
	} else if n == 0 {
		return a
	}
	mask := (1 << uint(width)) - 1
	a, n = a&int64(mask), n%width
	return ((a >> uint(n)) | ((a & int64((1<<uint(n))-1))<<(uint(width)-uint(n))))
}

func rotl(width int, a int64, n int) int64 {
	if n < 0 {
		return rotr(width, a, -n)
	} else if n == 0 {
		return a
	}
	mask := (1 << uint(width)) - 1
	a, n = a&int64(mask), n%width
	return (((a << uint(n)) & int64(mask) | (a >> (uint(width)-uint(n))))
}

func asr(width int, a int64, n int) int64 {
	mask, topBitMask := int64((1<<uint(width))-1), int64(1<<(uint(width)-1))
	if n < 0 {
		return (a << uint(-n)) & mask
	} else if n == 0 {
		return a
	}
	a, n = a&mask, n%width
	if a&topBitMask != 0 {
		return ((a >> uint(n)) | topBitMask<<(uint(width)-uint(n)))
	}
	return (a >> uint(n))
}

func helperFuncs(width int, a int64) {
	mask := (1 << uint(width)) - 1
	aA := a | (mask>>uint(width))
	fmt.Printf("    ROtr:     0b%s \n", strconv.FormatInt(a&mask, 2))
	fmt.Printf("           = 0b%s\n\n", strconv.FormatInt(rotr(width, a, 1), 2))

	// Continue with other helper functions...
}

func main() {
	bitwiseBuiltin(8, 27, 125)
	helperFuncs(8, 27)
}