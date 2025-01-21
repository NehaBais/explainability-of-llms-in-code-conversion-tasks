package main

import (
	"fmt"
)

func bitwise(a int, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", a<<b) // left shift
	fmt.Printf("a >> n: %d\n", a>>b) // arithmetic right shift on most platforms
	// logical right shift for the unsigned representation of 'a'
	c := uint(a)
	fmt.Printf("c >> b: %d\n", c>>b) // logical right shift
}

func main() {
	bitwise(10, 5) // Example usage
}
