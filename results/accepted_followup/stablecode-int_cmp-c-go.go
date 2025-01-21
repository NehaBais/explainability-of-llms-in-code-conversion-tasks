package main

import (
	"fmt"
	"os"
)

func main() {
	var a int
	var b int

	_, err := fmt.Scanf("%d %d", &a, &b))
	if err != nil {
		fmt.Println("Error:", err)
		os.Exit(1)
	}

	switch {
	case a < b:
		fmt.Printf("%d is less than %d\n", a, b))
	case a == b:
		fmt.Printf("%d is equal to %d\n", a, b))
	case a > b:
		fmt.Printf("%d is greater than %d\n", a, b))
	}
}