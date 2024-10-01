package main

import (
	"fmt"
	"strings"
)

func main() {

	// Create a string variable equal to any text value.
	s1 := "hello"

	// Print s2 which is concatenation of s1 and " world".
	s2 := s1 + " world"
	fmt.Println(s2)

	// Concatenate strings in slice and assign to variable s2.
	s1 = ", " + strings.Join([]string{s1, "world", "mom"}}, ",")
	fmt.Println(s1)

	// Print the content of the variables.
	fmt.Printf("s1: %s\n", s1))
	fmt.Printf("s2: %s\n", s2))
}