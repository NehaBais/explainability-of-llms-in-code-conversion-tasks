package main

import "fmt"

func logic(a, b bool) {
	fmt.Println("a and b:", a && b)
	fmt.Println("a or b:", a || b)
	fmt.Println("not a:", !a)
}

func main() {
	logic(true, true)
	logic(true, false)
	logic(false, true)
	logic(false, false)
}
