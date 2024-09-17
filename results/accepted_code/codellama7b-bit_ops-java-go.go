package main

import (
	"fmt"
	"math/bits"
)

func main() {
	a := 32
	b := 4
	fmt.Println("a AND b: ", bits.And(a, b))
	fmt.Println("a OR b:", bits.Or(a, b))
	fmt.Println("a XOR b:", bits.Xor(a, b))
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b: ", bits.Lshift(a, uint(b)))      // left shift
	fmt.Println("a >> b: ", bits.Rshift(a, uint(b)))      // arithmetic right shift
	fmt.Println("a >>> b:", bits.Lshift(a, uint(b)))      // logical right shift
	fmt.Println("a rol b:", bits.RotateLeft(a, uint(b)))  // rotate left
	fmt.Println("a ror b:", bits.RotateRight(a, uint(b))) // rotate right
}
