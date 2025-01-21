package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int
	_, err := fmt.Scan(&a, &b)
	if err != nil {
		os.Exit(1)
	}

	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
