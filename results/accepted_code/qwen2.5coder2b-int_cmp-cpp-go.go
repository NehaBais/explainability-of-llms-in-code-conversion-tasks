package main

import (
	"fmt"
)

func main() {
	var a, b int

	if _, err := fmt.Scan(&a, &b); err != nil {
		fmt.Println("could not read the numbers")
		return
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b)
	case a == b:
		fmt.Printf("%d is equal to %d\n", a, b)
	default:
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
