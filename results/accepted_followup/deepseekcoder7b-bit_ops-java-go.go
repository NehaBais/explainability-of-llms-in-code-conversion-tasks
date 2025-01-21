package main

import (
	"fmt"
	"strconv"
)

func bitwise(a int, b int) {
	fmt.Println("a AND b: " + strconv.Itoa(a&b))
	fmt.Println("a OR b: " + strconv.Itoa(a|b))
	fmt.Println("a XOR b: " + strconv.Itoa(a^b))
	fmt.Println("NOT a: " + strconv.Itoa(^a)) //Note that for bitwise NOT in Go, we use ^ symbol instead of ~

	// Left shift and right arithmetic shift are same in go as compared to Java. Here is the left shift
	fmt.Println("a << b: " + strconv.Itoa(a<<uint32(b))) //left shift

	if a >= 0 {
		fmt.Println("a >> b: " + strconv.Itoa(a>>uint32(b))) //logical right shift
	} else {
		fmt.Printf("Negative number %d does not support logical right shift\n", a)
	}
}
func main() {
	bitwise(5, 2)
}
