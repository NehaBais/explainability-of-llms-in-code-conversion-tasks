package main

import (
	"fmt"
)

func bitwise(a int64, b int) {
	fmt.Printf("a AND b: %d\n", a&int64(b))
	fmt.Printf("a OR b: %d\n", a|int64(b))
	fmt.Printf("a XOR b: %d\n", a^int64(b))
	fmt.Printf("NOT a: %d\n", ^a)
	fmt.Printf("a << b: %d\n", a<<uint(b)) // left shift
	fmt.Printf("a >> b: %d\n", a>>uint(b)) // arithmetic right shift (Go does not differentiate between logical and arithmetic shifts for signed integers, so it's the same as >>>)
}

func main() {
	bitwise(10, 2) // Replace with your desired inputs
}
