package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Printf("a and b: %v\n", a && b)
	fmt.Printf("a or b: %v\n", a || b)
	fmt.Printf("not a: %v\n", !a)
}
