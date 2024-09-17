package main

import "fmt"

func main() {
	var a int
	var b int
	fmt.Print("Enter an integer: ")
	fmt.Scanln(&a)
	fmt.Print("Enter another integer: ")
	fmt.Scanln(&b)
	if a < b {
		fmt.Println(a, "is less than", b)
	} else if a == b {
		fmt.Println(a, "equals", b)
	} else {
		fmt.Println(a, "is greater than", b)
	}
}
