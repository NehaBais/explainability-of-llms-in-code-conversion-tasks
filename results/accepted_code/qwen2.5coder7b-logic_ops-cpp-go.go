package main

import (
	"fmt"
)

func printLogic(a, b bool) {
	fmt.Println("a and b is", a && b)
	fmt.Println("a or b is", a || b)
	fmt.Println("not a is", !a)
}

func main() {
	printLogic(true, false)
}
