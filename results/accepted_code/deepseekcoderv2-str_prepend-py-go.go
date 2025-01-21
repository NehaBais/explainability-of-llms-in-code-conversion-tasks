package main

import (
	"fmt"
)

func main() {
	s := "12345678"
	// Prepend a string literal to s
	s = "0" + s
	fmt.Println(s)
}
