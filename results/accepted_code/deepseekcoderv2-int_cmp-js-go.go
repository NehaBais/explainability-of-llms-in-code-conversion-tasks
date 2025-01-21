package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter the first integer: ")
	fmt.Scan(&a)
	fmt.Print("Enter the second integer: ")
	fmt.Scan(&b)

	if a == b {
		fmt.Println(a, "equals", b)
	}
	if a < b {
		fmt.Println(a, "is less than", b)
	}
	if a > b {
		fmt.Println(a, "is greater than", b)
	}
}
