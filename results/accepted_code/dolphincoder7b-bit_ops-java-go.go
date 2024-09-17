package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Println("a AND b: ", a&b)
	fmt.Println("a OR b:  ", a|b)
	fmt.Println("a XOR b:  ", a^b)
	fmt.Println("NOT a:   ", ^a)
	fmt.Println("a << b:  ", a<<uint(b))              // left shift
	fmt.Println("a >> b:  ", a>>uint(b))              // arithmetic right shift
	fmt.Println("a >>> b:  ", a>>uint(b))             // logical right shift
	fmt.Println("a rol b:  ", rotateLeft(a, int(b)))  //rotate left
	fmt.Println("a ror b:  ", rotateRight(a, int(b))) //rotate right
}
func main() {
	bitwise(21, 4)
}
