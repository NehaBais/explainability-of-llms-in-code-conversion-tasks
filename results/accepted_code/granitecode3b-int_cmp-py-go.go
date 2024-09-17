package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter value of a:")
	fmt.Scanln(&a)
	fmt.Println("Enter value of b:")
	fmt.Scanln(&b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else {
		fmt.Println("a is equal to b")
	}
}
