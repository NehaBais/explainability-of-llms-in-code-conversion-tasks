package main
import (
	"fmt"
)
func bitwise(a int, b int) {
	fmt.Printf("a AND b: %d\n", a & b)
	fmt.Printf("a OR b: %d\n", a | b)
	fmt.Printf("a XOR b: %d\n", a ^ b)
	fmt.Printf("NOT a: %d\n", ^a)
	fmt.Printf("a << b: %d\n", a<<b) // left shift
	fmt.Printf("a >> b: %d\n", a>>b) // arithmetic right shift
	fmt.Printf("a >>> b: %d\n", a>>>b) // logical right shift
	fmt.Printf("a rol b: %d\n", rotateLeft(a, b)) //rotate left
	fmt.Printf("a ror b: %d\n", rotateRight(a, b)) //rotate right
}
func rotateLeft(a int, b int) int {
	return (a << b) | (a >> (32 - b))
}
func rotateRight(a int, b int) int {
	return (a >> b) | ((a & 0xffffffff) << (32-b))
}