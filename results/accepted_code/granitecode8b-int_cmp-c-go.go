package main

import "fmt"

func main() {
	var a, b int
	fmt.Println("Enter two integers:")
	fmt.Scan(&a, &b)

	if a < b {
		fmt.Printf("%d is less than %dn", a, b)
	} else if a == b {
		fmt.Printf("%d is equal to %dnb", a, b)
	} else {
		fmt.Printf("%d is greater than %dnb", a, b)
	}
}
