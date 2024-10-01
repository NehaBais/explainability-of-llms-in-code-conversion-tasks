package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	s3 := []string{s1, "world", "mom"}
	fmt.Println(strings.Join(s3, ", "))

	s4 := strings.Join(s3, ", ")
	fmt.Println(s4)
}
