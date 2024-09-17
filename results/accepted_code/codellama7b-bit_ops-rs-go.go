package main

import "fmt"

func main() {
	a := uint8(105)
	b := uint8(91)
	fmt.Println("a      =", a)
	fmt.Println("b      =", b)
	fmt.Println("a | b  =", a|b)
	fmt.Println("a & b  =", a&b)
	fmt.Println("a ^ b  =", a^b)
	fmt.Println("!a     =", ^a)
	fmt.Println("a << 3 =", a<<3)
	fmt.Println("a >> 3 =", a>>3)
}
