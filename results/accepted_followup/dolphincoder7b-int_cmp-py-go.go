package main

import "fmt"

func GetAB() {
	var a int
	fmt.Print("Enter value of a: ")
	fmt.Scan(&a)

	var b int
	fmt.Print("Enter value of b: ")
	fmt.Scan(&b)

	if a < b {
		fmt.Println("a is less than b")
	} else if a > b {
		fmt.Println("a is greater than b")
	} else if a == b {
		fmt.Println("a is equal to b")
	}
}
