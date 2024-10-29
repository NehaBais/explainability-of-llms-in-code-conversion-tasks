package main

import (
	"fmt"
	"strings"
)

func main() {
	// Comparing two strings for exact equality
	s1 := "abcd"
	s2 := "abcd"
	fmt.Println(s1 == s2) // true

	// Comparing two strings for inequality
	s3 := "ABCD"
	s4 := "abcd"
	fmt.Println(s3 != s4) // true

	// Comparing two strings to see if one is lexically ordered before than the other
	s5 := "abcd"
	s6 := "dcba"
	fmt.Println(s5 < s6) // true

	// Comparing two strings to see if one is lexically ordered after than the other
	s7 := "dcba"
	s8 := "abcd"
	fmt.Println(s7 > s8) // false

	// How to achieve both case sensitive comparisons and case insensitive comparisons within the language
	s9 := "ABCD"
	s10 := "abcd"
	fmt.Println(strings.ToLower(s9) == strings.ToLower(s10)) // true

	// How the language handles comparison of numeric strings if these are not treated lexically
	s11 := "123"
	s12 := "123"
	fmt.Println(s11 == s12) // true
}
