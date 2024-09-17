package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)
	switch {
	case a < b:
		fmt.Printf("%d is less than %d", a, b)
	case a > b:
		fmt.Printf("%d is greater than %d", a, b)
	default:
		fmt.Printf("%d equals %d", a, b)
	}
}
