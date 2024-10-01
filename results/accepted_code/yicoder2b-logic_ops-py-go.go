package main

import "fmt"

func logic(a bool, b bool) {
	fmt.Printf("a and b: %t\n", a && b)
	fmt.Printf("a or b: %t\n", a || b)
	fmt.Printf("not a: %t\n", !a)
}
