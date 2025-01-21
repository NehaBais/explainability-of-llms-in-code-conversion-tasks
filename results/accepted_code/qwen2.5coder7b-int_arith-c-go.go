package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Print("Enter two integers: ")
	fmt.Scan(&a, &b)

	fmt.Printf("a+b = %d\n", a+b)
	fmt.Printf("a-b = %d\n", a-b)
	fmt.Printf("a*b = %d\n", a*b)

	if b != 0 {
		fmt.Printf("a/b = %d\n", a/b)
		fmt.Printf("a%%b = %d\n", a%b)
	} else {
		fmt.Println("Cannot divide by zero")
	}
}
