package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Println("a AND b: ", a&b) // Bitwise AND
	fmt.Println("a OR b: ", a|b)  // Bitwise OR
	fmt.Println("a XOR b: ", a^b) // Bitwise XOR

	fmt.Println("Left shift of a by b bits :", a<<b)  // Left shift
	fmt.Println("Right shift of a by b bits :", a>>b) // Right shift, Arithmetic right shift as in Go it does not perform logical shift for negative numbers
}
