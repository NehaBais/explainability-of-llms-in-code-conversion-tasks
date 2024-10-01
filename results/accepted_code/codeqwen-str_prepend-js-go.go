package main

import (
	"fmt"
)

func main() {
	// No built-in prepend in Go, so we use concatenation
	var s string = ", World"
	s = "Hello" + s
	fmt.Println(s)
}
