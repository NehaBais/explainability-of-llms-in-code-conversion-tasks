package main

import "fmt"

func main() {
	a := true
	b := false

	printLogic(a, b)
}

func printLogic(a, b bool) {
	fmt.Printf("a and b is %v\n", a && b)
	fmt.Printf("a or b is %v\n", a || b)
	fmt.Printf("not a is %v\n", !a)
}
