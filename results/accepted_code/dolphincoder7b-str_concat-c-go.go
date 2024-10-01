package main

import (
	"fmt"
	"strings"
)

func sconcat(s1 string, s2 string) string {
	return strings.Join([]string{s1, s2}, "")
}

func main() {
	s := "hello"

	// Option 1: using printf
	fmt.Printf("%s literal\n", s)

	// Option 2: using + operator
	fmt.Printf("%s%s\n", s, " literal")

	// Concatenating the string
	s2 := sconcat(s, " literal")
	fmt.Println(s2)
}
