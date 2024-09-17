package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)
	switch {
	case a < b:
		fmt.Printf("%d is less than %dn", a, b)
	case a > b:
		fmt.Printf("%d is greater than %dn", a, b)
	default:
		fmt.Printf("%d is equal to %dn", a, b)
	}
}
