package main

import (
	"fmt"
)

func compare(a int, b int) {
	if a == b {
		fmt.Printf("%d is equal to %d\n", a, b)
	}
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	}
	if a > b {
		fmt.Printf("%d is greater than %d\n", a, b)
	}
}
