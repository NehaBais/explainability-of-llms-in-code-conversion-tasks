package main

import "fmt"

func main() {
	a := 10
	b := 5
	fmt.Printf("a and b: %dnn", a&b)
	fmt.Printf("a or b: %dnn", a|b)
	fmt.Printf("a xor b: %dnn", a^b)
	fmt.Printf("not a: %dnn", ^a)
	fmt.Printf("a << n: %dnn", a<<b) // left shift
	fmt.Printf("a >> n: %dnn", a>>b) // arithmetic right shift
	c := uint(a)                     // convert the signed integer into unsigned to perform logical shift
	fmt.Printf("c >> b: %dnn", c>>b) // logical right shift
	// there are no rotation operators in Go, so we'll simulate them with bitwise operations
	fmt.Printf("left rotate: %dnn", (a<<b)|(a>>uint(32-b)))
	fmt.Printf("right rotate: %dnn", (a>>b)|(a<<uint(32-b)))
}
