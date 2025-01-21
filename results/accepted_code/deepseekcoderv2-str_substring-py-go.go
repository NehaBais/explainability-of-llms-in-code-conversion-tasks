package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abcdefgh"
	n, m := 2, 3
	char := "d"
	chars := "cd"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1 : n+m-1])

	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])

	// whole string minus last character;
	fmt.Println(s[:len(s)-1])

	// starting from a known character char="d" within the string and of m length;
	indx := strings.Index(s, char)
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	} else {
		fmt.Println("Character not found")
	}

	// starting from a known substring chars="cd" within the string and of m length.
	indx = strings.Index(s, chars)
	if indx != -1 {
		fmt.Println(s[indx : indx+m])
	} else {
		fmt.Println("Substring not found")
	}
}
