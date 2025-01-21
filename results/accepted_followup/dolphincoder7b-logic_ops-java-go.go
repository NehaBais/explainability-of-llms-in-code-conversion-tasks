package main

import "fmt"

func logic(a bool, b bool) {
	fmt.Printf("a AND b: %v\n", a && b)
	fmt.Printf("a OR b: %v\n", a || b)
	fmt.Printf("NOT a: %v\n", !a)
}
func main() {
	logic(true, false) // Outputs: a AND b: false
	//         a OR b: true
	//         NOT a: false
}
