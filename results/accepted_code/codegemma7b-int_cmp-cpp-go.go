package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int

	_, err := fmt.Scanf("%d %d", &a, &b)
	if err != nil {
		fmt.Fprintln(os.Stderr, "could not read the numbers")
		return
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
