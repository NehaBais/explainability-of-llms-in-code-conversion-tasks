package main

import (
	"fmt"
	"strings"
)

func main() {
	// String to be processed
	s := "abc文字化けdef"

	// Length of the string
	n := len(s)

	// Starting position for substring extraction
	m := 3

	// Print the first three characters starting from index 2 (c文字)
	fmt.Println(string([]rune(s)[2:5]))

	// Print the entire string starting from index 2 (c文字化けdef)
	fmt.Println(string([]rune(s)[2:]))

	// Print the string except the last character (abc文字化けde)
	fmt.Println(strings.TrimSuffix(s, string([]rune(s)[n-1])))

	// Print the first three characters starting from 'b' (bc文)
	cpos := strings.Index(s, "b")
	fmt.Println(string([]rune(s)[cpos+1 : cpos+4]))

	// Print the first three characters starting from "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(string([]rune(s)[spos+1 : spos+4]))
}
