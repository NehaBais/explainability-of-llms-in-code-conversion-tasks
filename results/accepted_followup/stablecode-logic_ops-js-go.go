package main

import "fmt"

func logic(a bool, b bool) {

	// Implementing AND operation
	andResult := a && b

	// Implementing OR operation
	orResult := a || b

	// Implementing NOT operation
	notA := !a

	fmt.Println("a AND b:", andResult)
	fmt.Println("a OR b:", orResult)
	fmt.Println("NOT a:", notA)
}
