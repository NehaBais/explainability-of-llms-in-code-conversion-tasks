package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int
	if _, err := fmt.Scan(&a, &b); err != nil {
		fmt.Fprintln(os.Stderr, "could not read the numbers")
		os.Exit(1)
	}

	switch {
	case a < b:
		fmt.Println(a, "is less than", b)
	case a == b:
		fmt.Println(a, "is equal to", b)
	case a > b:
		fmt.Println(a, "is greater than", b)
	}
}
