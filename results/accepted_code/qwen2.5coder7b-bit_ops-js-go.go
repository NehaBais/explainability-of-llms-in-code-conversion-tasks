package main

import (
	"fmt"
)

func bitwise(a, b int) {
	fmt.Println("a AND b:", a&b)
	fmt.Println("a OR b:", a|b)
	fmt.Println("a XOR b:", a^b)
	fmt.Println("NOT a:", ^a)
	fmt.Println("a << b:", a<<b)
	fmt.Println("a >> b:", a>>b)
	fmt.Println("a >>> b:", uint(a)>>uint(b))
}

func main() {
	bitwise(5, 2)
}
