package main

import (
	"fmt"
)

func printSubstring(s string, n, m int) {
	fmt.Println(s[n-1 : n+m-1])
}

func main() {
	s := "abcdefgh"

	n := 2
	m := 3

	printSubstring(s, n, m)
	printSubstring(s, n, len(s)-n)
	printSubstring(s, 0, len(s)-1)

	char := 'd'
	index := strings.IndexRune(s, char)
	if index != -1 {
		fmt.Println(string(s[index : index+m]))
	}

	chars := "cd"
	index = strings.IndexRune(s, []rune(chars)[0])
	if index != -1 {
		fmt.Println(string(s[index : index+m]))
	}
}
