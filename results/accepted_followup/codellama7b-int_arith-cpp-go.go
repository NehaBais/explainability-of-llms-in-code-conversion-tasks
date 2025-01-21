package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println("a+b =", a+b)
	fmt.Println("a-b =", a-b)
	fmt.Println("a*b =", a*b)
	fmt.Printf("a/b = %d, remainder %d\n", int(math.Ceil(float64(a)/b)), a%b)
}
