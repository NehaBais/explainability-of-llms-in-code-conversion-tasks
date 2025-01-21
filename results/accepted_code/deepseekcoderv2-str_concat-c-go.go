package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "hello"
	fmt.Println(s, "literal")
	// or
	fmt.Println(s + " literal")

	s2 := s + " literal"
	fmt.Println(s2)
}
