package main

import (
	"fmt"
)

func main() {
	var s string = "hello"
	var s2 string = s + " literal"

	fmt.Println(s)  // Outputs: hello
	fmt.Println(s2) // Outputs: hello literal
}
