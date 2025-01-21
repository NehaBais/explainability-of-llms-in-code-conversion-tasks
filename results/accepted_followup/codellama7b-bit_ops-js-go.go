package main

import (
	"fmt"
)

func bitwise(a, b int) {
	// AND
	fmt.Println("a AND b: ", a&b)

	// OR
	fmt.Println("a OR b: ", a|b)

	// XOR
	fmt.Println("a XOR b: ", a^b)

	// NOT
	fmt.Println("NOT a: ", ^a)

	// Left shift
	fmt.Println("a << b: ", a<<uint(b))

	// Right shift (arithmetic)
	fmt.Println("a >> b: ", a>>uint(b))

	// Right shift (logical)
	fmt.Println("a >>> b: ", a>>(b))
}

func main() {
	bitwise(10, 5)
}
