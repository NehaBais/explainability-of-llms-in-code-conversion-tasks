package main

import "fmt"

func bitwiseBuiltIns(width int, a int, b int) {
	mask := (1 << uint(width)) - 1
	fmt.Printf("    AND:     0b%0*b \n", width, a)
	fmt.Printf("           & 0b%0*b \n", width, b)
	fmt.Printf("           = 0b%0*b \n", width, (a&b)&mask)
	fmt.Printf("    OR:      0b%0*b \n", width, a)
	fmt.Printf("           | 0b%0*b \n", width, b)
	fmt.Printf("           = 0b%0*b \n", width, (a|b)&mask)
	fmt.Printf("    XOR:     0b%0*b \n", width, a)
	fmt.Printf("           ^ 0b%0*b \n", width, b)
	fmt.Printf("           = 0b%0*b \n", width, (a^b)&mask)
	fmt.Printf("    NOT:   ~ 0b%0*b \n", width, a)
	fmt.Printf("           = 0b%0*b \n", width, (~a)&mask)
	fmt.Printf("    SHIFTS\n")
	fmt.Printf("      RIGHT:   0b%0*b \n", width, a)
	fmt.Printf("             >> 1\n")
	fmt.Printf("            = 0b%0*b \n", width, (a>>1)&mask)
	fmt.Printf("      LEFT:    0b%0*b \n", width, a)
	fmt.Printf("             << 1\n")
	fmt.Printf("            = 0b%0*b \n", width, (a<<1)&mask)
}
func rotr(width int, a int, n int) int {
	"Rotate a, n times to the right"
	if n < 0 {
		return rotl(width, a, -n)
	} else if n == 0 {
		return a
	} else {
		mask := (1 << uint(width)) - 1
		a, n = a&mask, n%width
		return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n)))
	}
}
func rotl(width int, a int, n int) int {
	"Rotate a, n times to the left"
	if n < 0 {
		return rotl(width, a, -n)
	} else if n == 0 {
		return a
	} else {
		mask := (1 << uint(width)) - 1
		a, n = a&mask, n%width
		return ((a << n) | ((a >> (width - n)) & mask))
	}
}
func asr(width int, a int, n int) int {
	"Sign-extended arithmetic shift right"
	if a>>uint(width-1)&1 == 0 {
		return a >> uint(n)
	} else {
		return (a >> uint(n)) | ((-1 << uint(width-n-1)) & mask)
	}
}
func main() {
	bitwiseBuiltIns(8, 27, 125)
}
