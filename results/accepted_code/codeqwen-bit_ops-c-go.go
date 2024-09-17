package main

import (
	"fmt"
)

func bitwise(A int, b int) {
	fmt.Printf("a and b: %d\n", A&b)
	fmt.Printf("A or b: %d\n", A|b)
	fmt.Printf("A xor b: %d\n", A^b)
	fmt.Printf("not A: %d\n", ^A)

	c := uint(A)
	fmt.Printf("c >> b: %d\n", c>>b)
}

func main() {
	bitwise(10, 3)
}
