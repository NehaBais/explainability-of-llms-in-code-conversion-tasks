package main

import "fmt"

func main() {
	a, b := 1024, 512
	fmt.Printf("a AND b: %d\n", a&b)        // Bitwise AND
	fmt.Printf("a OR b: %d\n", a|b)         // Bitwise OR
	fmt.Printf("a XOR b: %d\n", a^b)        // Bitwise XOR
	fmt.Printf("NOT a: %d\n", ^a)           // Bitwise NOT
	fmt.Printf("a  << b: %d\n", a<<uint(b)) // Left shift
	fmt.Printf("a >> b: %d\n", a>>uint(b))  // Arithmetic right shift
	fmt.Printf("a >>> b: %d\n", a>>uint(b)) // Logical right shift
}
