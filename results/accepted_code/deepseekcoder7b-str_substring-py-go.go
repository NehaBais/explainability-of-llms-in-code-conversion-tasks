package main

import (
	"fmt"
	"strings"
	unicode/utf8 "golang.org/x/text/encoding/unicode"
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
	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1:n+m-1])
	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])
	// whole string minus last character;
	if len(s) != 0 {
		fmt.Println(s[:len(s)-1])
	}
	// starting from a known character char="d" within the string and of m length;
	indx := utf8Index(s, string(char))
	if indx != -1 {
		fmt.Println(s[indx:indx+m])
	}
	// starting from a known substring chars="cd" within the string and of m length;
	indx = utf8Index(s, chars)
	if indx != -1 {
		fmt<｜begin▁of▁sentence｜>Println(s[indx:indx+m])
	}
}