package main

import "fmt"

func main() {
	var A, b int
	fmt.Scan(&A, &b)

	if A < b {
		fmt.Printf("%d is less than %d\n", A, b)
	} else if A == b {
		fmt.Printf("%d is equal to %d\n", A, b)
	} else {
		fmt.Printf("%d is greater than %d\n", A, b)
	}
}
