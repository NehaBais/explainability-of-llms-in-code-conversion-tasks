package main

import "fmt"

func bitwise(a, b int) {
	fmt.Printf("a and b: %d\n", a&b)
	fmt.Printf("a or b: %d\n", a|b)
	fmt.Printf("a xor b: %d\n", a^b)
	fmt.Printf("not a: %d\n", ^a)
	fmt.Printf("a << n: %d\n", uint(a)<<uint(b)) /* left shift */
	fmt.Printf("a >> n: %d\n", uint(a)>>uint(b)) /* on most platforms: arithmetic right shift */
	c := a
	fmt.Printf("c >> b: %d\n", uint(c)>>uint(b)) /* logical right shift */
	fmt.Println()
}
