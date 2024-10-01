package main

import (
	"fmt"
)

func printLogic(A bool, b bool) {
	fmt.Printf("A and b is %t\n", A && b)
	fmt.Printf("A or b is %t\n", A || b)
	fmt.Printf("not a is %t\n", !A)
}

func main() {
	printLogic(true, false)
}
