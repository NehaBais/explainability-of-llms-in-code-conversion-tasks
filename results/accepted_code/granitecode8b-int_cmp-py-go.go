package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Println("Enter value of a:")
	fmt.Scanln(&a)
	fmt.Println("Enter value of b:")
	fmt.Scanln(&b)
	switch {
	case a < b:
		fmt.Println("a is less than b")
	case a > b:
		fmt.Println("a is greater than b")
	default:
		fmt.Println("a is equal to b")
	}
}
