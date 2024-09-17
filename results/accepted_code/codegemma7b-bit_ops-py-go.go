import "fmt"

func bitwiseBuiltIns(width, a, b int) {
	mask := (1 << width) - 1

	fmt.Printf("    AND:     0b%0b\n", a&b&mask)
	fmt.Printf("    OR:      0b%0b\n", a|b&mask)
	fmt.Printf("    XOR:     0b%0b\n", a^b&mask)
	fmt.Printf("    NOT:   ~ 0b%0b\n", ~a&mask)

	fmt.Printf("    SHIFTS\n\n")

	fmt.Printf("      RIGHT:   0b%0b >> 1\n", a>>1&mask)
	fmt.Printf("      LEFT:    0b%0b << 1\n", a<<1&mask)

	fmt.Printf("    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n\n")

	fmt.Printf("               asr(%d, 0b%0b, 1)\n", width, a>>1&mask)
	fmt.Printf("               asr(%d, 0b%0b, 2)\n", width, a>>2&mask)
	fmt.Printf("               asr(%d, 0b%0b, 4)\n", width, a>>4&mask)
}

func rotr(width, a, n int) int {
	if n < 0 {
		return rotl(width, a, -n)
	}
	if n == 0 {
		return a
	}

	mask := (1 << width) - 1
	a = a & mask
	return (a>>n) | (a<<(width-n))
}

func rotl(width, a, n int) int {
	if n < 0 {
		return rotr(width, a, -n)
	}
	if n == 0 {
		return a
	}

	mask := (1 << width) - 1
	a = a & mask
	return (a<<n) | (a>>(width-n))
}

func asr(width, a, n int) int {
	if n < 0 {
		return asr(width, a, -n)
	}
	if n == 0 {
		return a
	}

	signBit := a >> (width - 1)
	shifted := a >> n
	return shifted | (signBit << (width - n))
}

func helperFuncs(width, a int) {
	fmt.Printf("    LEFT:    rotl(%d, 0b%0b, 1)\n", width, rotl(width, a, 1))
	fmt.Printf("    LEFT:    rotl(%d, 0b%0b, 2)\n", width, rotl(width, a, 2))
	fmt.Printf("    LEFT:    rotl(%d, 0b%0b, 4)\n", width, rotl(width, a, 4))

	fmt.Printf("    RIGHT:   rotl(%d, 0b%0b, 1)\n", width, rotr(width, a, 1))
	fmt.Printf("    RIGHT:   rotl(%d, 0b%0b, 2)\n", width, rotr(width, a, 2))
	fmt.Printf("    RIGHT:   rotl(%d, 0b%0b, 4)\n", width, rotr(width, a, 4))

	fmt.Printf("    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n\n")

	fmt.Printf("               asr(%d, 0b%0b, 1)\n", width, asr(width, a, 1))
	fmt.Printf("               asr(%d, 0b%0b, 2)\n", width, asr(width, a, 2))
	fmt.Printf("               asr(%d, 0b%0b, 4)\n", width, asr(width, a, 4))
}

func main() {
	bitwiseBuiltIns(8, 27, 125)
	helperFuncs(8, 27)
}