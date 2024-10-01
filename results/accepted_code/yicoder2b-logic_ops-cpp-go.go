package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Printf("%v and %v is %v\n", a, b, a && b)
	fmt.Printf("%v or %v is %v\n", a, b, a || b)
	fmt.Printf("not %v is %v\n", a, !a)
}
