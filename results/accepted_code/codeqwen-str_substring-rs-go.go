package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(string([]rune(s)[n : n+m]))

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(string([]rune(s)[n:]))

	// Print all characters except the last (abc文字化けde)
	fmt.Println(string([]rune(s)[:len(s)-1]))

	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.IndexRune(s, 'b')
	fmt.Println(string([]rune(s)[cpos : cpos+m]))

	// Print 3 characters starting with "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(string([]rune(s)[spos : spos+m]))
}
