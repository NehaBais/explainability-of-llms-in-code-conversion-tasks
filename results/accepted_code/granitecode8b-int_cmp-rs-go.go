package main

import (
	"fmt"
	"os"
)

func main() {
	var a, b int
	fmt.Fscanf(os.Stdin, "%d %d", &a, &b)
	switch {
	case a < b:
		fmt.Printf("%d is less than %dn", a, b)
	case a == b:
		fmt.Printf("%d equals %dn", a, b)
	case a > b:
		fmt.Printf("%d is greater than %d", a, b)
	}
}
