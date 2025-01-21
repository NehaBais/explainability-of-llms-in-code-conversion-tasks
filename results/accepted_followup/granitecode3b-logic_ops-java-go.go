package main

import "fmt"

func logic(a, b bool) {
	fmt.Println("a AND b: ", a && b)
	fmt.Println("a OR b: ", a || b)
	fmt.Println("NOT a: ", !a)
}
