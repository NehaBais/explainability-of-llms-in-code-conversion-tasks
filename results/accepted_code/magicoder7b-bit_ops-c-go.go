package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", a<<b) /* left shift */
	fmt.Printf("a >> n: %d\n", a>>b) /* arithmetic right shift */

	// convert the signed integer into unsigned, so it will perform logical shift
	c := uint(a)
	fmt.Printf("c >> b: %d\n", bits.RotateLeft(c, b)) /* left rotate */
}

func main() {
	bitwise(10, 2)
}
