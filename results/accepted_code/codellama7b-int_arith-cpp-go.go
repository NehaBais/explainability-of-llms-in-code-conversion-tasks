package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	fmt.Println("a+b =", a+b)
	fmt.Println("a-b =", a-b)
	fmt.Println("a*b =", a*b)
	fmt.Printf("a/b = %d, remainder %d\n", a/b, a%b)
}
