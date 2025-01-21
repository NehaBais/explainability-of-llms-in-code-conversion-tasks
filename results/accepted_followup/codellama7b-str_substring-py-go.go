package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	s := "abcdefgh"
	n, m, char, chars := 2, 3, 'd', 'cd'
	// starting from n=2 characters in and m=3 in length;
	fmt.Println(string([]rune(s)[n-1:n+m-1]))
	// starting from n characters in, up to the end of the string;
	fmt.Println(string([]rune(s)[n-1:]))
	// whole string minus last character;
	fmt.Println(string([]rune(s)[:-1]))
	// starting from a known character char="d" within the string and of m length;
	indx := utf8.IndexRune(string([]rune(s)), rune('d'))
	if indx != -1 {
		fmt.Println(string([]rune(s)[indx : indx+m]))
	} else {
		fmt.Println("Character not found.")
	}
	// starting from a known substring chars="cd" within the string and of m length. 
	indx = utf8.IndexRune(string([]rune(s)), rune('c' + 'd'))
	if indx != -1 {
		fmt.Println(string([]rune(s)[indx : indx+m]))
	} else {
		fmt.Println("Substring not found.")
	}
}