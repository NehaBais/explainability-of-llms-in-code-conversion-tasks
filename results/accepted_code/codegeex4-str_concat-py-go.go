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

	s1 = "hello"
	strs := []string{s1, "world", "mom"}
	fmt.Println(strings.Join(strs, ", "))

	strs = []string{s1, "world", "mom"}
	s2 = strings.Join(strs, ", ")
	fmt.Println(s2)
}
