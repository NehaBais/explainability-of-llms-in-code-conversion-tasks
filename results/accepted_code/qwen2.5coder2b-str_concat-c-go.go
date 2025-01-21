package main

import (
	"fmt"
)

func sconcat(s1 string, s2 string) string {
	s0 := make([]byte, len(s1)+len(s2)+1)
	copy(s0[:], s1)
	copy(s0[len(s1):], s2)
	return string(s0)
}

func main() {
	s := "hello"
	fmt.Println("String literal:", s)

	// or
	fmt.Println("Concatenated string:", fmt.Sprintf("%s literal", s))

	s2 := sconcat(s, " literal")
	fmt.Println("Concatenated string:", s2)
}
