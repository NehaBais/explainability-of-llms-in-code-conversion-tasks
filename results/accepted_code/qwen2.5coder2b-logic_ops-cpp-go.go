package main

import (
	"fmt"
)

func printLogic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}

func main() {
	printLogic(true, true)
	printLogic(false, false)
	printLogic(true, false)
}
