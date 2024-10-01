package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	// starting from n characters in and of m length
	fmt.Println(str[n : n+m]) // => "cde"

	// starting from n characters in, up to the end of the string
	fmt.Println(str[n:]) // => "cdefgh"
	fmt.Println(str[n:]) // => "cdefgh"

	// whole string minus last character
	fmt.Println(str[:utf8.RuneCountInString(str)-1]) // => "abcdefg"

	// starting from a known character within the string and of m length
	fmt.Println(str[findRuneIndex(str, 'b') : findRuneIndex(str, 'b')+m]) // => "bcd"
}

func findRuneIndex(s string, ch rune) int {
	for i, r := range s {
		if r == ch {
			return i
		}
	}
	return -1
}
