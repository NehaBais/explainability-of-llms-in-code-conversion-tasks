package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Printf("a and b is %t\n", a && b)
	fmt.Printf("a or b is %t\n", a || b)
	fmt.Printf("not a is %t\n", !a)
}
func main() {
	printLogic(true, false) // change the arguments to whatever you need here
}
