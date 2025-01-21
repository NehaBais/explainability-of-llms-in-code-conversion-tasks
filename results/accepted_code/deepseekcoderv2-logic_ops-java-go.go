package main

import "fmt"

func logic(a, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, true)
	logic(true, false)
	logic(false, true)
	logic(false, false)
}
