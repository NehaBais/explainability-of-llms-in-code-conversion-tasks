package main

import (
	"fmt"
)

func main() {
	s := "abcdefgh"

	// starting from n=2 characters in and m=3 in length;
	fmt.Println(s[n-1 : n+m-1])

	// starting from n characters in, up to the end of the string;
	fmt.Println(s[n-1:])

	// whole string minus last character;
	fmt.Println(s[:len(s)-1])

	// starting from a known character char="d" within the string and of m length;
	char := 'd'
	index := strings.IndexRune(s, char)
	if index != -1 {
		fmt.Println(string(s[index : index+m]))
	}

	// starting from a known substring chars="cd" within the string and of m length.
	chars := "cd"
	index = strings.IndexRune(s, []rune(chars)[0])
	if index != -1 {
		fmt.Println(string(s[index : index+m]))
	}
}
