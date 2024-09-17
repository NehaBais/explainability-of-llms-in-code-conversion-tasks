package main

import (
	"fmt"
)

func compare(a int, b int) {
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

func main() {
	var a int // Replace with user input method in your program
	var b int // Replace with user input method in your program

	compare(a, b)
}
