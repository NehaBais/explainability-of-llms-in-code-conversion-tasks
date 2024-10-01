package main

import (
	"fmt"
	"strconv"
)

func main() {
	var a, b int
	fmt.Printf("Enter the first integer: ")
	if _, err := fmt.Scan(&a); err != nil {
		panic(err)
	}
	fmt.Printf("Enter the second integer: ")
	if _, err := fmt.Scan(&b); err != nil {
		panic(err)
	}
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
