package main

import (
	"fmt"
)

func logic(a bool, b bool) {
	fmt.Println("a and b:", a && b)
	fmt.Println("a or b:", a || b)
	fmt.Println("not a:", !a)
}
func main() {
	logic(true, false)
}
