package main

import (
	"fmt"
)

func bitwiseOps(a, b uint8) {
	fmt.Printf("a      = %s\n", strconv.FormatUint(uint64(a), 2))
	fmt.Printf("b      = %s\n", strconv.FormatUint(uint64(b), 2))
	fmt.Printf("a | b  = %s\n", strconv.FormatUint(uint64(a|b), 2))
	fmt.Printf("a & b  = %s\n", strconv.FormatUint(uint64(a&b), 2))
	fmt.Printf("a ^ b  = %s\n", strconv.FormatUint(uint64(a^b), 2))
	fmt.Printf("!a     = %s\n", strconv.FormatUint(uint64(!a), 2))
	fmt.Printf("a << 3 = %s\n", strconv.FormatUint(uint64(a<<3), 2))
	fmt.Printf("a >> 3 = %s\n", strconv.FormatUint(uint64(a>>3), 2))
}

func main() {
	bitwiseOps(105, 91)
}
