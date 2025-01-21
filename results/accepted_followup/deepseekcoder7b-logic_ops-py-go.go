package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Println("a && b:", a && b) // and operation
	fmt.Println("a || b:", a || b) // or operation
	fmt.Println("!a:", !a)         // not operation
}

func main() {
	logic(true, false)
}
