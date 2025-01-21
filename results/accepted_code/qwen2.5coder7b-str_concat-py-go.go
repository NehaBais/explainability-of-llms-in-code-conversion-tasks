package main

import (
	"fmt"
)

func main() {
	// create a string variable equal to any text value
	s1 := "hello"

	// concatenate two strings and print it out
	fmt.Println(s1 + " world")

	// create another string variable whose value is the original variable concatenated with another string literal
	s2 := s1 + " world"
	fmt.Println(s2)

	// join multiple strings and print it out
	s3 := ", ".join([]string{s1, "world", "mom"})
	fmt.Println(s3)
}
