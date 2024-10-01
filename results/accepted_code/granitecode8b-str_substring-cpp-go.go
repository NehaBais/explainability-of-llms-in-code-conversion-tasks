package main

import (
	"fmt"
)

func main() {
	s := "0123456789"
	n := 3
	m := 4
	c := '2'
	sub := "456"
	fmt.Println(s[n : m+n])                                                     // starting from n characters in and of m length
	fmt.Println(s[n:])                                                          // starting from n characters in, up to the end of the string
	fmt.Println(s[:len(s)-1])                                                   // whole string minus the last character
	fmt.Println(s[strings.Index(s, string(c)) : m+strings.Index(s, string(c))]) // starting from a known character within the string and of m length
	fmt.Println(s[strings.Index(s, sub) : m+strings.Index(s, sub)])             // starting from a known substring within the string and of m length
}
