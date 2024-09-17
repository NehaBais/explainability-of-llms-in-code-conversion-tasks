package main

import (
	"fmt"
	"io"
)

func compare(a, b int) {
	if a == b {
		fmt.Fprintf(io.Discard, "%d equals %d\n", a, b)
	} else if a < b {
		fmt.Fprintf(io.Discard, "%d is less than %d\n", a, b)
	} else if a > b {
		fmt.Fprintf(io.Discard, "%d is greater than %d\n", a, b)
	}
}

func main() {
	var a, b int
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	compare(a, b)
}
