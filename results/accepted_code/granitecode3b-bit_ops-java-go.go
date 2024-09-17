package main

import (
	"fmt"
)

func main() {
	var a, b int = 10, 3
	fmt.Println("a AND b: ", a&b)
	fmt.Println("a OR b: ", a|b)
	fmt.Println("a XOR b: ", a^b)
	fmt.Println("NOT a: ", ^a)
	fmt.Println("a << b: ", a<<b)                                                     // left shift
	fmt.Println("a >> b: ", a>>b)                                                     // arithmetic right shift
	fmt.Println("a >>> b: ", a>>uint(b))                                              // logical right shift
	fmt.Println("a rol b: ", int(uint(a)|uint(a)<<uint(b)))                           //rotate left, Java 1.5+
	fmt.Println("a ror b: ", int(uint(a)<<uint(b)|uint(a)&uint(0x7fffffff)>>uint(b))) //rotate right, Java 1.5+
}
