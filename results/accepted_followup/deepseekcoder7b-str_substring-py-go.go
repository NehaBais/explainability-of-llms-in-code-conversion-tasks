package main

import (
	"fmt"
	"golang.org/x/text/encoding/unicode"
	"strings"
)

func utf8Index(s string, substring string) int {
	return strings.Index(s, substring)
}
func main() {
	s := "abcdefgh"
	n := 2
	m := 3
	char := 'd'
	chars := "cd"
	fmt.Println(s[n-1 : n+m-1]) // starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1:])        // starting from n characters in, up to the end of the string;
	if len(s) != 0 {            // whole string minus last character;
		fmt.Println(s[:len(s)-1])
	}
	indx := utf8Index(s, string(char)) // starting from a known character char="d" within the string and of m length;
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	}
	indx = utf8Index(s, chars) // starting from a known substring chars="cd" within the string and of m length;
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	}
}
