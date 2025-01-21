package main

import "fmt"

func logic(A bool, b bool) {
	fmt.Println("A AND b: ", A && b)
	fmt.Println("A OR b: ", A || b)
	fmt.Println("NOT a: ", !A)
}

func main() {
	logic(true, true) // example usage
}
