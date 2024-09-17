package main

import "fmt"
import "math"

func bitwise(a, b int) {
	fmt.Printf("a AND b: %d\n", a&b)
	fmt.Printf("a OR b: %d\n", a|b)
	fmt.Printf("a XOR b: %d\n", a^b)
	fmt.Printf("NOT a: %d\n", ^a)                                     // bitwise NOT on the first integer
	fmt.Printf("a << b: %d\n", int(math.Pow(float64(a), float64(b)))) // left shift
	fmt.Printf("a >> b: %d\n", a>>b)
	fmt.Printf("a >>> b: %d\n", int((^uint(a))<<b)>>b)
}
