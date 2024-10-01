package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:m])                // starting from n characters in and of m length
	fmt.Println(s[n:])                 // starting from n characters in, up to the end of the string
	fmt.Println(s[:len(s)-1])          // whole string minus the last character
	fmt.Println(strings.Index(s, c))   // starting from a known character within the string and of m length
	fmt.Println(strings.Index(s, sub)) // starting from a known substring within the string and of m length
}
