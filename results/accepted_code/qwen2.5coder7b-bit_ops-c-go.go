package main

import (
	"fmt"
)

func bitwise(a, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", a<<b) /* left shift */
	fmt.Printf("a >> n: %d\n", a>>b) /* on most platforms: arithmetic right shift */
	/* convert the signed integer into unsigned, so it will perform logical shift */
	var c uint = uint(a)
	fmt.Printf("c >> b: %d\n", c>>b) /* logical right shift */

	// for rotation in Go we have to do manual calculation
	if a >= 0 {
		fmt.Printf("a rotated left n bits: %d\n", rotateLeft(a, b))
		fmt.Printf("a rotated right n bits: %d\n", rotateRight(a, b))
	} else {
		fmt.Println("Rotation is not defined for negative numbers in two's complement representation.")
	}
}

func main() {
	bitwise(10, 2)
}

// left rotation
func rotateLeft(x, n uint) uint {
	return (x << n) | (x >> (32 - n))
}

// right rotation
func rotateRight(x, n uint) uint {
	return (x >> n) | (x << (32 - n))
}
