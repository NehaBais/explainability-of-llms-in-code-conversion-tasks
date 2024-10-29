package main

import (
	"fmt"
	"strings"
)

func substr(input string, start int, length int) string {
	asRunes := []rune(input)
	if start >= len(asRunes) {
		return ""
	}
	if start+length > len(asRunes) {
		length = len(asRunes) - start
	}
	return string(asRunes[start : start+length])
}

func findSubstr(input string, substring string) int {
	return strings.Index(input, substring)
}

func main() {
	s := "0123456789"
	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(substr(s, n, m))        // Starting from n characters in and of m length;
	fmt.Println(substr(s, n, len(s)-n)) // starting from n characters in, up to the end of the string;
	fmt.Println(substr(s, 0, len(s)-1)) // whole string minus the last character;
	start := findSubstr(s, string(c))   // starting from a known character within the string and of m length;
	fmt.Println(substr(s, start, m))
	start = findSubstr(s, sub) // starting from a known substring within the string and of m length;
	fmt.Println(substr(s, start, m))
}
