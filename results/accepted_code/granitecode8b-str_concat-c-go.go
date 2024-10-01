package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "hello"
	fmt.Printf("%sn", s) // Print s as a string literal

	s2 := strings.Join([]string{s, " literal"}, "")
	fmt.Println(s2) // Concatenate s and " literal" with no separator

	s3 := s + " literal"
	fmt.Println(s3) // Concatenate s and " literal" with a space as a separator
}
