package main

import (
	"fmt"
)

func compare(a int, b int) {
	if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}

func main() {
	var a int
	var b int

	fmt.Print("Enter the first integer: ")
	fmt.Scan(&a)

	fmt.Print("Enter the second integer: ")
	fmt.Scan(&b)

	compare(a, b)
}
