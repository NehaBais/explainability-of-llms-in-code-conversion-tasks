package main

import "fmt"

func logic(A, B bool) {
	fmt.Printf("A AND b: %t\n", A && B)
	fmt.Printf("A OR b: %t\n", A || B)
	fmt.Printf("NOT a: %t\n", !A)
}

func main() {
	logic(true, false)
}
