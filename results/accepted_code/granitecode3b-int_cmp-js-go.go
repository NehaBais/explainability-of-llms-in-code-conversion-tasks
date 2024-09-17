package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)

	switch {
	case a < b:
		fmt.Println(a, "is less than", b)
	case a > b:
		fmt.Println(a, "is greater than", b)
	default:
		fmt.Println(a, "equals", b)
	}
}
