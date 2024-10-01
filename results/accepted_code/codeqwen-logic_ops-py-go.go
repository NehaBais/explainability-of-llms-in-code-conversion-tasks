package main

import "fmt"

func logic(A bool, B bool) {
	fmt.Printf("A and B: %v\n", A && B)
	fmt.Printf("A or B: %v\n", A || B)
	fmt.Printf("Not A: %v\n", !A)
}

func main() {
	logic(true, true)
	logic(false, true)
}
