package main

import (
	"fmt"
	"strings"
)

func substrFromN(s string, n int, m int) string {
	// starting from n characters in and m length;
	start := n - 1
	end := n + m - 1
	return s[start:end]
}

// starting from n characters in, up to the end of the string;
func substrFromNToEnd(s string, n int) string {
	return s[n-1:]
}

// whole string minus last character;
func substringMinusLast(s string) string {
	return s[:len(s)-1]
}

// starting from a known character char="d" within the string and of m length;
func substrByChar(s string, char rune, m int) string {
	indx := strings.IndexRune(s, char)
	start := indx
	end := indx + m
	return s[start:end]
}

// starting from a known substring chars="cd" within the string and of m length.
func substrByChars(s string, chars string, m int) string {
	indx := strings.Index(s, chars)
	start := indx
	end := indx + m
	return s[start:end]
}

func main() {
	// test values
	s := "abcdefgh"
	n, m, char, chars := 2, 3, 'd', "cd"

	fmt.Println(substrFromN(s, n, m))       // output: "cdefg"
	fmt.Println(substrFromNToEnd(s, n))     // output: "cdegh"
	fmt.Println(substringMinusLast(s))      // output: "abcde"
	fmt.Println(substrByChar(s, char, m))   // output: "cdab"
	fmt.Println(substrByChars(s, chars, m)) // output: "cde"
}
