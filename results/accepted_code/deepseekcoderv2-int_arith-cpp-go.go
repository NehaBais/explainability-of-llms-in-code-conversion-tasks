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
	if b != 0 {
		fmt.Println("a/b =", a/b, ", remainder", a%b)
	} else {
		fmt.Println("a/b = undefined (division by zero)")
	}
}
