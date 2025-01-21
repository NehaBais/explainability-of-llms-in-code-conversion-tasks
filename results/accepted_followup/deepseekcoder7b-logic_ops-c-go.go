package main

import "fmt"

func printLogic(a, b bool) {
	fmt.Println("a && b is", a && b)
	fmt.Println("a || b is", a || b)
	fmt.Println("!a is", !a)
}
