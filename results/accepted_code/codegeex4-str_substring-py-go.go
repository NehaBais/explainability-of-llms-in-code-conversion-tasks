package main

import (
	"fmt"
	"golang.org/x/text/unicode/norm"
)

func main() {
	s := []rune("abcdefgh")
	n, m := 2, 3
	char, chars := 'd', "cd"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(string(s[n-1 : n+m]))

	// starting from n characters in, up to the end of the string;
	fmt.Println(string(s[n-1:]))

	// whole string minus last character;
	fmt.Println(string(s[:len(s)-1]))

	indx := -1
	for i, ch := range s {
		if ch == char || string(ch) == chars {
			indx = i
			break
		}
	}

	if indx != -1 {
		// starting from a known character within the string and of m length;
		fmt.Println(string(s[indx : indx+m]))

		// starting from a known substring within the string and of m length.
		fmt.Println(string(s[indx : indx+m]))
	} else {
		fmt.Println("Character/substring not found")
	}
}
