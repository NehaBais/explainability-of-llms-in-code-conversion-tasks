
Here's the equivalent code in Go:
```
package main

import (
	"fmt"
)

func bitwiseBuiltIns(width int, a, b int) {
	mask := (1 << width) - 1

	fmt.Println("AND:")
	fmt.Printf("\t0b%[2]b & 0b%[3]b = 0b%[4]b\n", a, b, (a&b)&mask)

	fmt.Println("OR:")
	fmt.Printf("\t0b%[2]b | 0b%[3]b = 0b%[4]b\n", a, b, (a|b)&mask)

	fmt.Println("XOR:")
	fmt.Printf("\t0b%[2]b ^ 0b%[3]b = 0b%[4]b\n", a, b, (a^b)&mask)

	fmt.Println("NOT:")
	fmt.Printf("\t~0b%[1]b = 0b%[2]b\n", a, ~a&mask)

	fmt.Println("SHIFTS")

	fmt.Println("\tRIGHT:")
	fmt.Printf("\t0b%[1]b >> 1 = 0b%[2]b\n", a, (a>>1)&mask)

	fmt.Println("\tLEFT:")
	fmt.Printf("\t0b%[1]b << 1 = 0b%[2]b\n", a, (a<<1)&mask)
}

func rotr(width int, a, n int) int {
	if n < 0 {
		return rotl(width, a, -n)
	} else if n == 0 {
		return a
	} else {
		return (a>>uint(n)) | (a<<uint(32-n))&mask
	}
}

func rotl(width int, a, n int) int {
	if n < 0 {
		return rotr(width, a, -n)
	} else if n == 0 {
		return a
	} else {
		return (a<<uint(n)) | (a>>(32-n))&mask
	}
}

func asr(width int, a, n int) int {
	if n < 0 {
		return rotr(width, a, -n)
	} else if n == 0 {
		return a
	} else {
		return (a>>uint(n)) | (a<<uint(32-n))&mask
	}
}

func main() {
	bitwiseBuiltIns(8, 27, 125)
}
```
Note that in Go, the `^` operator is used for bitwise XOR, and the `&` operator is used for bitwise AND. Additionally, the `%[1]b` format string syntax is used to print a binary representation of an integer value, with each digit represented by a single character (e.g., 0b101 represents the value 5).
