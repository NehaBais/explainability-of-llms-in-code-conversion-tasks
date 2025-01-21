package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	// Correcting the join operation by converting each string in the slice to interface{}
	parts := []string{s1, "world", "mom"}
	result := fmt.Sprint([]interface{}(parts)...)
	fmt.Println(result)

	s2 = s1 + ", " + "world" + ", " + "mom"
	fmt.Println(s2)
}
