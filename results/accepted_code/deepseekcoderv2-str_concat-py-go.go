package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	// For the third part, we need to use a slice of strings and join them with ", ".
	parts := []string{s1, "world", "mom"}
	result := fmt.Sprint(parts...)
	fmt.Println(result)

	s2 = s1 + ", " + "world" + ", " + "mom"
	fmt.Println(s2)
}
