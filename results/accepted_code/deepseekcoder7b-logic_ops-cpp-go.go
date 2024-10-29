package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Println("a and b is", a && b)
	fmt.Println("a or b is", a || b)
	fmt.Println("not a is", !a)
}

func main() {
	printLogic(true, false) // Output: a and b is false  a or b is true not a is true
}
