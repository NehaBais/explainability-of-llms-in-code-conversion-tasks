package main

import (
	"fmt"
	"math/bits"
)

func bitwise(a int, b uint) {
	fmt.Println("a AND b: ", a&b)
	fmt.Println("a OR b: ", a|b)
	fmt.Println("a XOR b: ", a^b)
	fmt.Printf("NOT a: %v\n", ^a)
	fmt.Printf("a << b: %v\n", a<<b)                                 // left shift
	fmt.Printf("a >> b: %v\n", a>>b)                                 // arithmetic right shift
	fmt.Printf("a >>> b: %v\n", uint(a)>>b)                          // logical right shift
	fmt.Printf("a rol b: %v\n", bits.RotateLeft32(uint(a), int(b)))  //rotate left, Go 1.13+
	fmt.Printf("a ror b: %v\n", bits.RotateLeft32(^uint(a), int(b))) //rotate right, Go 1.13+
}

func main() {
	bitwise(10, 2)
}
