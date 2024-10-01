package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int

	if _, err := fmt.Fscan(os.Stdin, &a, &b); err != nil {
		fmt.Fprintf(os.Stderr, "could not read the numbers\n")
		return
	}

	// test for less-than
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}

	// test for equality
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}

	// test for greater-than
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
